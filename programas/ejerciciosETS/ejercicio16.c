#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    printf("Round Robin\n");
    int np = 0, procesos[9], quantum = 0, nq = 0;
    double tp = 0; // tiempo promedio.
    int finalizado = 0;
    while (np <= 1)
    {
        printf("Numero de procesos: ");
        scanf("%d", &np);
    }
    // para i=0, mientras i<np, hacer:...
    //  pedimos el tamaño de cada proceso.
    for (int i = 0; i < np; i++)
    {
        printf("Inserte el tamaño de proceso %d: ", i + 1);
        scanf("%d", &procesos[i]);
    }
    while (quantum <= 9)
    {
        printf("Tamaño de quantum: ");
        scanf("%d", &quantum);
    }
    printf("Numero de procesos: (%d) \n", np);
    printf("Tamaño de quantum: (%d) \n", quantum);
    // Algoritmo RR
    while (finalizado == 0)
    {
        finalizado = 1;
        for (int i = 0; i < np; i++)
        {
            if (procesos[i] > 10)
            {
                procesos[i] -= quantum;
                printf("\nQuantum[%d] proceso %d valor del proceso: %d", quantum, i + 1, procesos[i]);
                if (procesos[i] > 0)
                {
                    finalizado = 0; // No finalizado
                }
                else
                {
                    nq++;
                    tp += nq * quantum;
                }
            }
        }
    }
    tp = tp / np;
    printf("\nTiempo promedio RR %f:", tp);
    return 0;
}