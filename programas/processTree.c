// programa en c que genera un arbol de procesos que se ejecuta hasta encontrar un numero en especifico.

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void process(pid_t p, int current, int level){
    if(current > 50){
        for(int i = 0; i < current; i++){
            p = fork();
        }
    }else{
        for(int j = 0; j < level; j++){
            printf("_");
        }
        printf("%d", current);
    }
}

int main(){
    int pid;
    int child;
    pid_t p;
    child = (int) rand() / 100000000;
    process(p, child, 1);
    // p = fork();
    
}