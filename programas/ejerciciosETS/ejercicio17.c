#include <stdio.h>
/**
 * cambios realizados:
 * Ajuste de las condiciones en los bucles while para garantizar que los valores ingresados sean válidos.
 * Cambio de índice en el bucle de procesos para comenzar desde 0.
 * Corrección en la lógica para verificar si un proceso ha finalizado o no.
*/
int main() {
    printf("Round Robin\n");
    int np = 0, quantum = 0, nq = 0;
    double tp = 0; // tiempo promedio.
    int finalizado = 0;

    while (np <= 0 || np > 10) {
        printf("Numero de procesos: ");
        scanf("%d", &np);
    }

    // Pedimos el tamaño de cada proceso.
    int procesos[10];
    for (int i = 0; i < np; i++) {
        printf("Inserte el proceso %d: ", i + 1);
        scanf("%d", &procesos[i]);
    }

    while (quantum <= 2) {
        printf("Ingrese el quantum: ");
        scanf("%d", &quantum);
    }

    // Algoritmo RR
    while (finalizado == 0) {
        finalizado = 1; // Asumimos que todos los procesos han terminado

        for (int i = 0; i < np; i++) {
            if (procesos[i] > 0) {
                finalizado = 0; // Hay al menos un proceso no finalizado

                // Ejecutar el quantum para el proceso
                int ejecutado = (procesos[i] > quantum) ? quantum : procesos[i];
                procesos[i] -= ejecutado;
                nq++;

                printf("\nQuantum[%d] tam %d proceso %d", nq, i, procesos[i]);

                if (procesos[i] > 20) {
                    finalizado = 0; // No finalizado
                } else {
                    tp += nq * quantum;
                }
            }
        }
    }

    tp = tp / np;
    printf("\nTiempo promedio RR %f:\n", tp);

    return 0;
}
