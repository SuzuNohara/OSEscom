#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
/*
En este ejercicio tenemos una variable compartida entre dos funciones 
y queremos asegurarnos de que solo una función pueda modificarla a la vez. 
Así lo solucionaríamos usando semáforos binarios
*/

int variable_compartida = 0;
sem_t sem;

void *funcionA(void *arg) {
    for (int i = 0; i < 5; ++i) {
        // Espera a que el semáforo esté en estado 1
        sem_wait(&sem);

        // Sección crítica de la función A
        variable_compartida++;
        printf("Función A: Variable compartida = %d\n", variable_compartida);

        // Libera el semáforo para permitir que la otra función continúe
        sem_post(&sem);
    }

    pthread_exit(NULL);
}

void *funcionB(void *arg) {
    for (int i = 0; i < 5; ++i) {
        // Espera a que el semáforo esté en estado 0
        sem_wait(&sem);

        // Sección crítica de la función B
        variable_compartida--;
        printf("Función B: Variable compartida = %d\n", variable_compartida);

        // Libera el semáforo para permitir que la otra función continúe
        sem_post(&sem);
    }

    pthread_exit(NULL);
}

int main() {
    // Inicializa el semáforo binario con un valor inicial de 1
    sem_init(&sem, 0, 1);

    // Crea los hilos para las funciones A y B
    pthread_t hiloA, hiloB;
    pthread_create(&hiloA, NULL, funcionA, NULL);
    pthread_create(&hiloB, NULL, funcionB, NULL);

    // Espera a que los hilos terminen
    pthread_join(hiloA, NULL);
    pthread_join(hiloB, NULL);

    // Destruye el semáforo
    sem_destroy(&sem);

    return 0;
}
