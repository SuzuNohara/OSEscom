#include <stdlib.h>
#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

#define N_hilos 200

sem_t sbanco, scliente, sorden;
int ncliente = 0;

void *cliente(void *n)
{

    int id = *(int *)n;
    sleep(random() % 100);
    printf("Llega el cliente %d\n", id);

    sem_wait(&sorden);
    sem_post(&sorden);

    sem_wait(&scliente);
    ncliente++;

    if (ncliente == 1)
        sem_wait(&sbanco);
    sem_post(&scliente);

    sleep(random() % 3 + 2); /*/ tiempo de espera en la cola */
    printf("Se atiende al cliente: %d\n", id);
    sleep(random() % 3 + 2); /* tiempo invertido en atenderle */

    sem_wait(&scliente);
    ncliente--;
    printf("Sale el cliente %d\n", id);
    if (ncliente == 0)
        sem_post(&sbanco);
    sem_post(&scliente);

    pthread_exit(NULL);
}

void *furgon(void *n)
{
    int id = *(int *) n;

    sleep(random() % 100);
    printf("Llega el furgon %d\n", id);

    sem_wait(&sorden);
    sem_wait(&sbanco);
    printf("Se atiende a los guardias %d\n", id);
    sleep(random() % 5 + 5); /* tiempo invertido en atenderlos */
    printf("Se va el furgon %d\n", id);
    sem_post(&sbanco);
    sem_post(&sorden);

    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t hilo[N_hilos];
    int id[N_hilos];
    int i, furgon_creado = 0;

    sem_init(&sbanco, 0, 1);
    sem_init(&scliente, 0, 1);
    sem_init(&sorden, 0, 1);

    for (i = 0; i < N_hilos; i++)
    {
        id[i] = i;
        if (furgon_creado == 1)
            pthread_create(&hilo[i], NULL, cliente, (void *)&id[i]);
        else if (random() % 100 < 95)
            pthread_create(&hilo[i], NULL, cliente, (void *)&id[i]);
        else
        {
            pthread_create(&hilo[i], NULL, furgon, (void *)&id[i]);
            furgon_creado = 1;
        }
    }

    for (i = 0; i < N_hilos; i++)
        pthread_join(hilo[i], NULL);
    sem_destroy(&sbanco);
    sem_destroy(&scliente);
    sem_destroy(&sorden);
    return 0;
}
