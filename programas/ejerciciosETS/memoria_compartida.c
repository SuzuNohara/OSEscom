#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHM_SIZE 1024 // tamaño de la serie compartida en bytes

int main()
{
    int shmid;        // ID de la memoria compartida
    char *shmaddr;    // Puntero al inicio de in memoria compartida
    key_t key = 1234; // Clave para la memoria compartida

    // Creamos la memoria compartida
    shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1)
    {
        perror("shmget");
        exit(EXIT_FAILURE);
    }
    // Asociamos la memoria compartida al espacio de direcciones del proceso
    shmaddr = shmat(shmid, NULL, 0);
    if (shmaddr == (char *)-1)
    {
        perror("shmat");
        exit(EXIT_FAILURE);
    }
    // Escribimos en la memoria compartida
    sprintf(shmaddr, "Hola, memoria compartida!");
    // Esperamos un poco para que el otro proceso pueda leer
    sleep(2);
    // Leemos la memoria compartida
    printf("El otro proceso escribió: %s\n", shmaddr);

    // Liberamos la memoria compartida
    if (shmdt(shmaddr) == -1)
    {
        perror("shmdt");
        exit(EXIT_FAILURE);
    }
    if (shmctl(shmid, IPC_RMID, NULL) == -1)
    {
        perror("shmctl");
        exit(EXIT_FAILURE);
    }
    return 0;
}