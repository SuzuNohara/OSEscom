#include<stdio.h>

int main(){
    char init[100];
    char parentesis[100];
    char llaves[100];
    char corcheas[100];
    int control = 0;
    int par = 0, llav = 0, cor = 0;
    printf("Ingrese la cadena a evaluar");
    scanf("%s", init);
    while(init[control] != NULL && control <100){
        switch(init[control]){
            case '(':
                parentesis[par] = '(';
                par++;
            break;
            case '{':
                llaves[llav] = '{';
                llav++;
            break;
            case '[':
                corcheas[cor] = '[';
                cor++;
            break;
            case ')':
                par--;
                parentesis[par] = ')';
            break;
            case '}':
                llav--;
                llaves[llav] = '}';
            break;
            case ']':
                cor--;
                corcheas[cor] = ']';
            break;
        }
    }
    if(par == 0 && cor == 0 && llav == 0){
        printf("Cadena balanceada");
    }else{
        printf("Cadnea no balanceada");
    }
}