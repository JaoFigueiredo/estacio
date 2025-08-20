#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int random;

    printf("Escolha seu destino\n\n");
    printf("1.Pedra\n");
    printf("2.Papel\n");
    printf("3. Tesoura\n");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1: 
        srand(time(0));
        random = (rand() %3)+1;
            if(random == 1){
                printf("Você escolheu pedra, eu escolhi pedra, EMPATE\n!");
            }else if(random == 2){
                printf("Você escolheu pedra, eu escolhi papel, VOCÊ PERDEU!\n");
            }else
                printf("Você escolheu pedra, eu escolhi tesoura, VOCÊ VENCEU!\n");
                
        break;
    
    case 2: 
        srand(time(0));
        random = (rand() %3)+1;
            if(random == 1){
                printf("Você escolheu papel, eu escolhi pedra, VOCÊ VENCEU!\n");
            }else if(random == 2){
                printf("Você escolheu papel, eu escolhi papel, EMPATE!\n");
            }else
                printf("Você escolheu papel, eu escolhi tesoura, VOCÊ PERDEU!\n");
        break;

    case 3: 
        srand(time(0));
        random = (rand() %3)+1;
            if(random == 1){
                printf("Você escolheu Tesoura, eu escolhi pedra, VOCÊ PERDEU!\n");
            }else if(random == 2){
                printf("Você escolheu Tesoura, eu escolhi papel, VOCÊ VENCEU!\n");
            }else
                printf("Você escolheu Tesoura, eu escolhi tesoura, EMPATE!\n");
        break;

        
    default:
            printf("ENTÃO VOCE TENTA FUGIR!");
        break;
    }

    return 0;
}