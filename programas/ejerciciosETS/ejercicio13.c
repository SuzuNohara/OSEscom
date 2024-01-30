#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM_HILOS 3

// Semáforos para sincronización
sem_t semaforo_1, semaforo_2, semaforo_3;

// Función que simula el trabajo del hilo 1
void *hilo_1(void *arg) {
    while (1) {
        sem_wait(&semaforo_1);  // Espera a que se le dé permiso para ejecutarse
        printf("Hilo 1 ejecutándose\n");
        sem_post(&semaforo_2);  // Señala al siguiente hilo que puede ejecutarse
    }

    pthread_exit(NULL);
}

// Función que simula el trabajo del hilo 2
void *hilo_2(void *arg) {
    while (1) {
        sem_wait(&semaforo_2);
        printf("Hilo 2 ejecutándose\n");
        sem_post(&semaforo_3);
    }

    pthread_exit(NULL);
}

// Función que simula el trabajo del hilo 3
void *hilo_3(void *arg) {
    while (1) {
        sem_wait(&semaforo_3);
        printf("Hilo 3 ejecutándose\n");
        sem_post(&semaforo_1);
    }

    pthread_exit(NULL);
}

int main() {
    // Inicialización de semáforos
    sem_init(&semaforo_1, 0, 1);  // Inicia con valor 1
    sem_init(&semaforo_2, 0, 0);  // Inicia con valor 0
    sem_init(&semaforo_3, 0, 0);  // Inicia con valor 0

    // Creación de hilos
    pthread_t hilos[NUM_HILOS];
    pthread_create(&hilos[0], NULL, hilo_1, NULL);
    pthread_create(&hilos[1], NULL, hilo_2, NULL);
    pthread_create(&hilos[2], NULL, hilo_3, NULL);

    // Espera a que los hilos terminen (esto no ocurrirá debido a los bucles infinitos)
    for (int i = 0; i < NUM_HILOS; ++i) {
        pthread_join(hilos[i], NULL);
    }

    // Destrucción de semáforos
    sem_destroy(&semaforo_1);
    sem_destroy(&semaforo_2);
    sem_destroy(&semaforo_3);

    return 0;
}
