#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem_seccion_critica;

void* proceso_P1(void* arg) {
    while (1) {
        // Solicitar entrar en la sección crítica del recurso A
        printf("Proceso P1 solicitando entrar en la sección crítica de A.\n");
        sem_wait(&sem_seccion_critica);

        // Entrar en la sección crítica del recurso A
        printf("Proceso P1 entró en la sección crítica de A.\n");

        // Simular actividad en la sección crítica
        sleep(2);

        // Salir de la sección crítica del recurso A
        sem_post(&sem_seccion_critica);
        printf("Proceso P1 salió de la sección crítica de A.\n");

        // Simular otras operaciones fuera de la sección crítica
        sleep(1);
    }

    return NULL;
}

void* proceso_P2(void* arg) {
    while (1) {
        // Solicitar entrar en la sección crítica del recurso A
        printf("Proceso P2 solicitando entrar en la sección crítica de A.\n");
        sem_wait(&sem_seccion_critica);

        // Entrar en la sección crítica del recurso A
        printf("Proceso P2 entró en la sección crítica de A.\n");

        // Simular actividad en la sección crítica
        sleep(2);

        // Salir de la sección crítica del recurso A
        sem_post(&sem_seccion_critica);
        printf("Proceso P2 salió de la sección crítica de A.\n");

        // Simular otras operaciones fuera de la sección crítica
        sleep(1);
    }

    return NULL;
}

void* proceso_P3(void* arg) {
    while (1) {
        // Solicitar entrar en la sección crítica del recurso A
        printf("Proceso P3 solicitando entrar en la sección crítica de A.\n");
        sem_wait(&sem_seccion_critica);

        // Entrar en la sección crítica del recurso A
        printf("Proceso P3 entró en la sección crítica de A.\n");

        // Simular actividad en la sección crítica
        sleep(2);

        // Salir de la sección crítica del recurso A
        sem_post(&sem_seccion_critica);
        printf("Proceso P3 salió de la sección crítica de A.\n");

        // Simular otras operaciones fuera de la sección crítica
        sleep(1);
    }

    return NULL;
}

int main() {
    // Inicializar el semáforo para controlar la sección crítica
    sem_init(&sem_seccion_critica, 0, 1);

    // Crear hilos para los procesos P1, P2 y P3
    pthread_t hilo_P1, hilo_P2, hilo_P3;

    if (pthread_create(&hilo_P1, NULL, proceso_P1, NULL) != 0 || pthread_create(&hilo_P2, NULL, proceso_P2, NULL) != 0 || pthread_create(&hilo_P3, NULL, proceso_P3, NULL) != 0) {
        perror("Error al crear hilos");
        exit(EXIT_FAILURE);
    }

    // Esperar a que los hilos terminen (lo cual nunca sucederá en este ejemplo)
    pthread_join(hilo_P1, NULL);
    pthread_join(hilo_P2, NULL);
    pthread_join(hilo_P3, NULL);

    // Destruir el semáforo
    sem_destroy(&sem_seccion_critica);

    return 0;
}