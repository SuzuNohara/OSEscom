#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <fcntl.h>

#define SEM_NAME_PAR "/mi_semaforo_par"
#define SEM_NAME_IMPAR "/mi_semaforo_impar"

void imprimir_impares(sem_t *sem_par, sem_t *sem_impar) {
    for (int i = 1; i <= 9; i += 2) {
        sem_wait(sem_impar);
        printf("Hijo 1 (impar): %d\n", i);
        sem_post(sem_par);
    }
}

void imprimir_pares(sem_t *sem_par, sem_t *sem_impar) {
    for (int i = 2; i <= 10; i += 2) {
        sem_wait(sem_par);
        printf("Hijo 2 (par): %d\n", i);
        sem_post(sem_impar);
    }
}

int main() {
    // Crear semáforos compartidos
    sem_t *sem_par = sem_open(SEM_NAME_PAR, O_CREAT | O_EXCL, 0644, 0);
    sem_t *sem_impar = sem_open(SEM_NAME_IMPAR, O_CREAT | O_EXCL, 0644, 1);

    if (sem_par == SEM_FAILED || sem_impar == SEM_FAILED) {
        perror("Error al crear semáforos");
        exit(EXIT_FAILURE);
    }

    pid_t pid;

    pid = fork();
    if (pid == -1) {
        perror("Error en fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Código del primer hijo (proceso par)
        imprimir_pares(sem_par, sem_impar);
        exit(EXIT_SUCCESS);
    }

    pid = fork();
    if (pid == -1) {
        perror("Error en fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Código del segundo hijo (proceso impar)
        imprimir_impares(sem_par, sem_impar);
        exit(EXIT_SUCCESS);
    }

    // Espera a que ambos procesos hijos terminen
    wait(NULL);
    wait(NULL);

    // Cerrar y eliminar los semáforos compartidos
    sem_close(sem_par);
    sem_close(sem_impar);
    sem_unlink(SEM_NAME_PAR);
    sem_unlink(SEM_NAME_IMPAR);

    return 0;
}
