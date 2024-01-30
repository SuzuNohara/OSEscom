#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
/*
se simulan procesos mediante la creación de hilos (pthread) que ejecutan la función hilo_proceso. 
Cada hilo representa un proceso y, al finalizar, incrementa el contador global. 
Este contador global mide la cantidad total de procesos ejecutados.
*/

#define NUM_PROCESOS 5

int contador_global = 0;

void ejecutar_proceso() {
    printf("Proceso ejecutado\n");
}

void *hilo_proceso(void *arg) {
    int id_proceso = *(int *)arg;

    ejecutar_proceso();

    contador_global++;

    printf("Proceso %d finalizado. Contador global: %d\n", id_proceso, contador_global);

    free(arg);  // Libera la memoria asignada para el identificador del proceso

    pthread_exit(NULL);
}

int main() {
    pthread_t hilos[NUM_PROCESOS];

    for (int i = 0; i < NUM_PROCESOS; ++i) {
        int *id_proceso = malloc(sizeof(int));
        *id_proceso = i + 1;

        pthread_create(&hilos[i], NULL, hilo_proceso, (void *)id_proceso);
    }

    for (int i = 0; i < NUM_PROCESOS; ++i) {
        pthread_join(hilos[i], NULL);
    }

    printf("Todos los procesos han finalizado. Contador global total: %d\n", contador_global);

    return 0;
}
