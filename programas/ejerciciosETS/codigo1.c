#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid1, pid2;
    int status1, status2;

    pid1 = fork();
    // comprobación de que el primer hijo se creó sin errores
    if (pid1 < 0){
        perror("Error en fork 1");
        exit(EXIT_FAILURE);
    }

    if (pid1 == 0){        
        sleep(5);
        exit(5);
    }
    // comprobación de que el segundo hijo se creó sin errores
    pid2 = fork();
    if (pid2 < 0){
        perror("Error en fork 2");
        exit(EXIT_FAILURE);
    }

    if (pid2 == 0){
        sleep(1);
        exit(1);
    }

    // Código del padre
    // Esperar por la finalización de ambos hijos
    waitpid(pid1, &status1, 0);
    waitpid(pid2, &status2, 0);

    printf("Proceso padre esperó a los dos hijos\n");

    return 0;
}
