#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

int cont_enlaces = 0;
sem_t critico;

void recorre(char *nombredir)
{
    DIR *d;
    struct dirent *entrada;
    struct stat datos;
    char *ruta;

    d = opendir(nombredir);
    if (d == NULL)
    {
        printf("Error al abrir el directorio\n");
        return;
    }

    entrada = readdir(d);
    while (entrada != NULL)
    {
        if (strcmp(entrada->d_name, ".") && strcmp(entrada->d_name, ".."))
        {
            ruta = (char *)malloc(strlen(nombredir) + strlen(entrada->d_name) + 2);
            sprintf(ruta, "%s/%s", nombredir, entrada->d_name);
            lstat(ruta, &datos);
            if (S_ISDIR(datos.st_mode))
            {                                 // es un directorio
                if (datos.st_uid == getuid()) // pertenece al usuario
                    recorre(ruta);
                else
                    printf("%s no pertenece al usuario\n", ruta);
            }
            else if (S_ISLNK(datos.st_mode))
            { // es un enlace blando ? /
                sem_wait(&critico);
                cont_enlaces++;
                sem_post(&critico);
            }
            free(ruta);
        }
        entrada = readdir(d);
    }
    closedir(d);
}

void *busca(void *dato)
{
    struct stat datos;
    char *nombredir = (char *)dato;
    lstat(nombredir, &datos);
    if (S_ISDIR(datos.st_mode))
        if (datos.st_uid == getuid())
            recorre(nombredir);
        else
            printf("%s no pertenece al usuario\n", nombredir);
    else
        printf("%sno es un directorio\n", nombredir);
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t hilo[argc - 1];
    int i;
        if (argc == 1)
    {
        printf("Debe especificar al menos un directorio\n");
        exit(1);
    }

    sem_init(&critico, 0, 1);
    for (i = 0; i < argc - 1; i++)
        pthread_create(&hilo[i], NULL, busca, (void *)argv[i + 1]);
    for (i = 0; i < argc - 1; i++)
        pthread_join(hilo[i], NULL);

    printf("Enlaces encontrados: %d\n", cont_enlaces);
    sem_destroy(&critico);
    return 0;
}