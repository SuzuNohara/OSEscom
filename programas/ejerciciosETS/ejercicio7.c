#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_PAGINAS 16
#define NUM_MARCOS 4

int tabla_paginas[NUM_PAGINAS];

sem_t sem_solicitud;
pthread_mutex_t mutex_tabla_paginas = PTHREAD_MUTEX_INITIALIZER;

void* escuchaSolicitudes(void* arg) {
    while (1) {
        // Simular solicitud de memoria
        // (en un sistema real, esto estaría esperando solicitudes del sistema o procesos)
        sem_wait(&sem_solicitud);

        // Manejar la solicitud (aquí se simula la asignación de memoria)
        int pagina_solicitada = rand() % NUM_PAGINAS;
        pthread_mutex_lock(&mutex_tabla_paginas);
        printf("Solicitud para la página %d\n", pagina_solicitada);

        // Verificar si la página ya está en memoria
        if (tabla_paginas[pagina_solicitada] == 1) {
            printf("  - Página ya está en memoria física\n");
        } else {
            // Si no está en memoria, simular carga desde el almacenamiento secundario
            int marco_disponible = rand() % NUM_MARCOS;
            printf("  - Cargar página %d en el marco %d\n", pagina_solicitada, marco_disponible);
            tabla_paginas[pagina_solicitada] = 1;
        }

        pthread_mutex_unlock(&mutex_tabla_paginas);
    }
    return NULL;
}

int main() {
    sem_init(&sem_solicitud, 0, 0);

    pthread_t hilo_solicitudes;

    // Crear el hilo para gestionar las solicitudes
    if (pthread_create(&hilo_solicitudes, NULL, escuchaSolicitudes, NULL) != 0) {
        perror("Error al crear el hilo de solicitudes");
        exit(EXIT_FAILURE);
    }

    // Simular procesos que realizan solicitudes
    for (int i = 0; i < 10; ++i) {
        // Simular la generación de una solicitud
        sleep(1); // Simular la espera entre solicitudes
        sem_post(&sem_solicitud);
    }

    // Esperar a que el hilo de solicitudes termine
    if (pthread_join(hilo_solicitudes, NULL) != 0) {
        perror("Error al esperar el hilo de solicitudes");
        exit(EXIT_FAILURE);
    }

    sem_destroy(&sem_solicitud);

    return 0;
}