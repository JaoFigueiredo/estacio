#include <stdio.h>

int main(){

    int numero=0;
    int resto=0;

    printf("Digite um número inteiro\n");
    scanf("%i",&numero);

    resto= numero % 2;

    if(numero > 0){
        if(resto == 0){
            printf("O número é positivo e par\n");
        }else
            printf("O número é positivo e impar\n");

    }else if(numero < 0){
        printf("O numero é negativo\n");

    }else 
        printf("O número é igual a zero\n");


    return 0;
}   