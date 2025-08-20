#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao=0;
    int numeroaleatorio,palpite;

    printf("BEM VINDO AO JOGO DE ADIVINHAÇÃO\n\n");
    printf("Menu principal\n\n");
    printf("1. Começar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroaleatorio = rand() %10;
        printf("Digite um número de 0 a 9: ");
        scanf("%i",&palpite);
        if (numeroaleatorio == palpite){
            printf("Você acertou, era o número %i\n\n",numeroaleatorio);
        }else
            printf("Você errou! Você escolheu o número %i e era o número %i\n\n",palpite,numeroaleatorio);
        break;
    
    case 2:
        printf("REGRAS\n\n");
        printf("O computador escolherá um número de 0 a 9\n");
        printf("Com um palpite você pode acertar?\n\n");
        break;

    case 3:
        printf("Até a próxima!\n\n");
        break;

    default:
        printf("Opção invalida\n\n");
        break;
    }

    return 0;
}