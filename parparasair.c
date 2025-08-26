#include <stdio.h>

int main(){

    int i=0;

    do
    {
        printf("Digite um numero par para sair");
        scanf("%d\n",&i);

        if((i%2)!=0){
            printf("\nO número não é par\n");
        }


    } while ((i%2)!=0);

        printf("Voce saiu");





    return 0;
}