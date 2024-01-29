#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

// programa 3

void comparar_archivos(char *nombre_archivo1, char *nombre_archivo2) {
    int fd1, fd2;
    struct stat stat1, stat2;

    // Abrir el primer archivo
    fd1 = open(nombre_archivo1, O_RDONLY);
    if (fd1 == -1) {
        perror("Error al abrir el primer archivo");
        exit(EXIT_FAILURE);
    }

    // Obtener información del primer archivo
    if (fstat(fd1, &stat1) == -1) {
        perror("Error al obtener información del primer archivo");
        close(fd1);
        exit(EXIT_FAILURE);
    }

    // Abrir el segundo archivo
    fd2 = open(nombre_archivo2, O_RDONLY);
    if (fd2 == -1) {
        perror("Error al abrir el segundo archivo");
        close(fd1);
        exit(EXIT_FAILURE);
    }

    // Obtener información del segundo archivo
    if (fstat(fd2, &stat2) == -1) {
        perror("Error al obtener información del segundo archivo");
        close(fd1);
        close(fd2);
        exit(EXIT_FAILURE);
    }

    // Verificar si los archivos tienen el mismo tamaño
    if (stat1.st_size != stat2.st_size) {
        printf("Los archivos son de diferentes tamaños\n");
        close(fd1);
        close(fd2);
        exit(EXIT_SUCCESS);
    }

    // Proyectar ambos archivos en memoria
    char *map1 = mmap(NULL, stat1.st_size, PROT_READ, MAP_PRIVATE, fd1, 0);
    char *map2 = mmap(NULL, stat2.st_size, PROT_READ, MAP_PRIVATE, fd2, 0);

    if (map1 == MAP_FAILED || map2 == MAP_FAILED) {
        perror("Error al proyectar archivos en memoria");
        close(fd1);
        close(fd2);
        exit(EXIT_FAILURE);
    }

    // Comparar el contenido de los archivos
    if (memcmp(map1, map2, stat1.st_size) == 0) {
        printf("Los archivos son idénticos\n");
    } else {
        printf("Los archivos son diferentes\n");
    }

    // Liberar la memoria y cerrar los archivos
    munmap(map1, stat1.st_size);
    munmap(map2, stat2.st_size);
    close(fd1);
    close(fd2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <archivo1> <archivo2>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    comparar_archivos(argv[1], argv[2]);

    return EXIT_SUCCESS;
}