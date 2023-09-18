#include<stdio.h>

int arrow(int size);

int main(){
    int size = 0;
    char rand[20];
    printf("Insert the size of the arrow: ");
    scanf("%d", &size);
    if(size % 2 == 0){
        size--;
    }
    arrow(size);
}

int arrow(int size){
    int line;
    for(int k = 0; k < size / 2; k++){
        for(int j = 0; j < size / 2 + 1; j++){
            printf(" ");
        }
        printf("*");
        for(int j = 0; j < size - k - 1; j++){
            printf(" ");
        }
        for(int j = 0; j <= 0 + 2 * k; j++){
            printf("*");
        }
        for(int j = 0; j < size / 2 - k; j++){
            printf(" ");
        }
        printf("\n");
    }
    for(int i = 0; i <= size * 2; i++){
        printf("*");
    }
    printf("\n");
    for(int k = 0; k <= size / 2; k++){
        for(int j = size / 2 - k; j <= size / 2; j++){
            printf(" ");
        }
        for(int j = size - 2 * k; j >= 1; j--){
            printf("*");
        }
        for(int j = size; j < size + (size / 2) + k; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

}