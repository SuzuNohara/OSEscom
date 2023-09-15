#include<stdio.h>

int main(){
    int size = 0;
    printf("Insert the size of the arrow: ");
    scanf("%d", &size);

    for(int i = 0; i < 2 * size; i++){
        printf("*");
    }
}