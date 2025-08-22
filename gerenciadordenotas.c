#include <stdio.h>

int main(){

    int opcao=0;
    float nota1=0.0 , nota2= 0.0, media = 0.0;

    printf("Bem vindo ao gerenciador de notas\n");
    printf("Escolha sua opção\n\n");
    printf("1. Calcular média\n");
    printf("2. Consultar situação\n");
    printf("3. Sair\n\n");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira o valor de suas notas\n");
        printf("Nota 1: ");
        scanf("%f",&nota1);
            if (nota1>=0 && nota1 <=10){
                printf("Nota 2: ");
                scanf("%f",&nota2);
                    if (nota2>=0 && nota2<=10){
                       media = ((nota1 + nota2)/2);
                       media>6 ? printf("Com a média %.1f, Voce está aprovado\n",media) : printf("Com a média %.1f, Voce está reprovado\n",media); 
                    }else
                        printf("Valor da nota 2 invalido\n");

            }else
                printf("Valor da nota 1 invalido\n");
        
        break;
    case 2:
            printf("Insira sua média\n");
            scanf("%f",&media);
            media>6 ? printf("Voce está aprovado\n") : printf("Voce está reprovado\n");
        break;
    case 3:
            printf("Até a próxima!\n");
            
        break;
    default:
            printf("Entrada invalida\n");
        break;
    }

    return 0;
}