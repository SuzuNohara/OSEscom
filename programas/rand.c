#include<stdio.h>

int main(){
    int record[100];
    int r;
    for(int i = 0; i < 100; i++){
        r = (int) rand()/10000000;
        printf("%d\n", r);
    }
}