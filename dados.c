#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int rolagem;
    
    printf("Digite o tipo de dado que quer rolar\n");
    printf("Exemplo: Se quer um d4 digite 4, d6 digite 6..\n\n");
    printf("d4, ");
    printf("d6, ");
    printf("d8, ");
    printf("d10, ");
    printf("d12, ");
    printf("d20\n");

    scanf("%i",&opcao);

    switch (opcao)
    {
    case 4:
        srand(time(0));
        rolagem = rand() %4;
        rolagem=rolagem+1;
        printf("O resultado do seu d4 é %i\n",rolagem);
        break;
    case 6:
        srand(time(0));
        rolagem = rand() %6;
        rolagem=rolagem+1;
        printf("O resultado do seu d6 é %i\n",rolagem);
        break;

    case 8:
        srand(time(0));
        rolagem = rand() %8;
        rolagem=rolagem+1;
        printf("O resultado do seu d8 é %i\n",rolagem);
        break;

    case 10:
        srand(time(0));
        rolagem = rand() %10;
        rolagem=rolagem+1;
        printf("O resultado do seu d10 é %i\n",rolagem);
        break;

    case 12:
        srand(time(0));
        rolagem = rand() %12;
        rolagem=rolagem+1;
        printf("O resultado do seu d12 é %i\n",rolagem);
        break;

    case 20:
        srand(time(0));
        rolagem = rand() %20;
        rolagem=rolagem+1;
        printf("O resultado do seu d20 é %i\n",rolagem);
        break;
    default:
        printf("Valor invalido");
        break;
    }

    return 0;
}