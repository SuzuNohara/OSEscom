#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

// Semáforos para los recursos A y B
sem_t semA, semB;

void *procesoP1(void *arg) {
    // Entrar en la sección crítica para el recurso A
    sem_wait(&semA);
    printf("Proceso P1 entró en la sección crítica para el recurso A\n");

    // Solicitar entrar en la sección crítica para el recurso B
    sem_wait(&semB);
    printf("Proceso P1 entró en la sección crítica para el recurso B\n");

    // Realizar operaciones críticas en A y B

    // Salir de la sección crítica para el recurso B
    sem_post(&semB);

    // Salir de la sección crítica para el recurso A
    sem_post(&semA);

    pthread_exit(NULL);
}

void *procesoP2(void *arg) {
    // Entrar en la sección crítica para el recurso B
    sem_wait(&semB);
    printf("Proceso P2 entró en la sección crítica para el recurso B\n");

    // Solicitar entrar en la sección crítica para el recurso A
    sem_wait(&semA);
    printf("Proceso P2 entró en la sección crítica para el recurso A\n");

    // Realizar operaciones críticas en B y A

    // Salir de la sección crítica para el recurso A
    sem_post(&semA);

    // Salir de la sección crítica para el recurso B
    sem_post(&semB);

    pthread_exit(NULL);
}

int main() {
    // Inicializar semáforos
    sem_init(&semA, 0, 1);  // Inicia con valor 1
    sem_init(&semB, 0, 1);  // Inicia con valor 1

    // Crear threads para P1 y P2
    pthread_t threadP1, threadP2;

    pthread_create(&threadP1, NULL, procesoP1, NULL);
    pthread_create(&threadP2, NULL, procesoP2, NULL);

    // Esperar a que los threads terminen
    pthread_join(threadP1, NULL);
    pthread_join(threadP2, NULL);

    // Destruir semáforos
    sem_destroy(&semA);
    sem_destroy(&semB);

    return 0;
}
