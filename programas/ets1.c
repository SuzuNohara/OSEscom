#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int pid; // process id
    pid_t p = fork(); // fork function
    if(p<0){ // process failed
      perror("fork fail");
      exit(1);
    }
    pid = getpid(); // get process id
    if(p == 0){
        for(int i = 2; i < 11; i+=2){
            printf("(%d, %d): %d\n", pid, p, i);
        }
    }else{
        for(int i = 1; i < 10; i+=2){
            printf("(%d, %d): %d\n", pid, p, i);
        }
    }
    return 0;
}