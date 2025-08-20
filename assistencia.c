// Idade 18<x<65 , renda<3000 e nº>2

#include <stdio.h>

int main(){
    unsigned int idade;
    float renda;
    unsigned int dependentes;

    printf("Insira a sua idade, sua renda e o número de dependentes\n");
    scanf("%u %f %u",&idade,&renda,&dependentes);
    
    if(idade > 65 && idade <= 18){
        if(renda < 3000){
            if(dependentes >= 2){
                printf("Você tem direito ao benefício");

            }else
                printf("Você não tem direito ao beneficio");

        }else
        printf("Você não tem direito ao beneficio");

    }else
        printf("Você não tem direito ao beneficio");

return 0;
}