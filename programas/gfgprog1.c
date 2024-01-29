#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int p1ready=1;
int p2ready=0;
int count1 = 1;
int count2 = 2;
int onebil = 1000000000;

int main()
{
    int pid; // process id
    int status;
    pid_t p = fork(); // fork function
    if(p<0){ // process failed
      perror("fork fail");
      exit(1);
    }
    pid = getpid(); // get process id
    if(p == 0){
        while(1){
            printf("1111) %d, %d, %d \n", p1ready, p2ready, count1);
            if(count1 >= 9){
                exit(0);
            }else if(p1ready == 1 && p2ready == 0){
                printf("(%d, %d): %d\n", pid, p, count1);
                count1 += 2;
                p1ready = 0;
                p2ready = 1;
            }
        }
    }else{
        while(1){
            printf("2222)%d, %d, %d \n", p1ready, p2ready, count2);
            if(count2 >= 10){
                exit(0);
            }else if(p2ready == 1 && p1ready == 0){
                printf("(%d, %d): %d\n", pid, p, count2);
                count2 += 2;
                p2ready = 0;
                p1ready = 1;
            }
        }
    }
    return 0;
}