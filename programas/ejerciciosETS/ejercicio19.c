#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pthread.h>

#define MAX_DIRS 10

// Estructura para pasar argumentos a la función del hilo
struct ThreadArgs {
    char* dir_path;
};

// Función para verificar si un fichero pertenece al usuario y se ha accedido recientemente
void procesar_fichero(const char *ruta) {
    struct stat info;
    if (stat(ruta, &info) == 0) {
        // Verificar si es un fichero regular y si pertenece al usuario
        if (S_ISREG(info.st_mode) && info.st_uid == getuid()) {
            // Verificar si el fichero ha sido accedido en la última hora
            time_t hora_actual = time(NULL);
            if ((hora_actual - info.st_atime) < 3600) {
                printf("Fichero encontrado: %s\n", ruta);
            }
        }
    }
}

// Función para procesar directorios de forma recursiva
void procesar_directorio(const char *ruta) {
    DIR *dir = opendir(ruta);
    if (dir == NULL) {
        perror("Error al abrir directorio");
        return;
    }

    struct dirent *entrada;
    while ((entrada = readdir(dir)) != NULL) {
        // Ignorar las entradas "." y ".."
        if (strcmp(entrada->d_name, ".") == 0 || strcmp(entrada->d_name, "..") == 0) {
            continue;
        }

        // Construir la ruta completa del elemento
        char elemento_ruta[PATH_MAX];
        snprintf(elemento_ruta, PATH_MAX, "%s/%s", ruta, entrada->d_name);

        // Verificar si el elemento es un directorio
        struct stat info;
        if (stat(elemento_ruta, &info) == 0 && S_ISDIR(info.st_mode)) {
            // Procesar el directorio recursivamente
            procesar_directorio(elemento_ruta);
        } else {
            // Procesar el fichero
            procesar_fichero(elemento_ruta);
        }
    }

    closedir(dir);
}

// Función del hilo para contar enlaces simbólicos
void* contar_enlaces_simbolicos(void* arg) {
    struct ThreadArgs* args = (struct ThreadArgs*)arg;
    procesar_directorio(args->dir_path);
    pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <directorio>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char *directorio = argv[1];

    // Verificar si el directorio es accesible
    if (access(directorio, R_OK | X_OK) != 0) {
        perror("Error al acceder al directorio");
        exit(EXIT_FAILURE);
    }

    // Crear hilos para procesar directorios en paralelo
    pthread_t threads[MAX_DIRS];
    struct ThreadArgs thread_args[MAX_DIRS];

    for (int i = 0; i < MAX_DIRS; ++i) {
        thread_args[i].dir_path = directorio;
        if (pthread_create(&threads[i], NULL, contar_enlaces_simbolicos, &thread_args[i]) != 0) {
            perror("Error al crear el hilo");
            exit(EXIT_FAILURE);
        }
    }

    // Esperar a que todos los hilos terminen
    for (int i = 0; i < MAX_DIRS; ++i) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Error al esperar al hilo");
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}