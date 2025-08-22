#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int opcao,opcao2;
    int random,random2,escolha,escolha2;

    printf("BEM VINDO AO JOGO DE COMPARAÇÃO\n\n");
    printf("Menu principal\n\n");
    printf("1. Começar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%i",&opcao);
    char cont;

    srand(time(0));
    random = rand() %100;
    random = (random+1);
    switch (opcao)
    {
    case 1:
        getchar();
        printf("O computador escolherá um número para você\n");
        printf("APERTE ENTER PARA CONTINUAR\n");
        getchar();
        scanf("%c",cont);
        srand(time(0));
        random2 = ((rand() %100)+1);
        printf("Seu numero é: %i\n",random2);
        printf("Agora escolha se seu número é maior, menor ou igual ao que o computador escolheu.\n");
        printf("1. Maior\n");
        printf("2. menor\n");
        printf("3. Igual\n");
        scanf("%i",&opcao2);

            switch (opcao2)
            {
            case 1:
                printf("Você acha que seu numero é maior!\n");
                printf("%i é maior que %i? \n\n",random2,random);
                if(random2>random){
                    printf("SIM, VOCÊ VENCEU\n");

                }else if(random2<random){
                    printf("NÃO, VOCÊ PERDEU!\n");

                }else
                    printf("NÃO, VOCÊ PERDEU!\n");
                break;

            case 2:
                printf("Você acha que seu numero é menor!\n");
                printf("%i é menor que %i? \n\n",random2,random);
            
                if(random2>random){
                    printf("NÃO, VOCÊ PERDEU!\n");

                }else if(random2<random){
                    printf("SIM, VOCÊ VENCEU\n\n");

                }else
                    printf("NÃO, VOCÊ PERDEU!\n");
                break;

            case 3:
                printf("Você acha que seu numero é igual!\n");
                printf("%i é igual a %i? \n\n",random2,random);

                if(random2>random){
                    printf("NÃO, VOCÊ PERDEU!\n");

                }else if(random2<random){
                    printf("NÃO, VOCÊ PERDEU!\n");

                }else
                    printf("SIM, VOCÊ VENCEU\n\n");
                break;
            

            default:
                printf("ENTRADA INVALIDA");
                break;
            }
    
        
        break;

    case 2:
        printf("Regras\n\n");
        printf("-Um valor é escolhido aleatóriamente pelo computador, depois outro número é escolhido para você\n");
        printf("-Sabendo o seu número, você escolhe qual comparação quer fazer: Maior, menor ou igual\n");
        printf("A comparação acontece e descobrimos o vencedor\n");
        break;

    case 3:
        printf("Até a próxima!");
        break;
    
    default:
        printf("Opção invalida");
        break;
    }

        return 0;
    }