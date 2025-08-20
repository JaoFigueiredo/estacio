#include <stdio.h>

int main(){
    
    int opcao=0;
    float saldo=1200;

    printf("Digite sua opção\n1.Ver saldo\n2.Depositar\n3.Sacar\n\n");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu salário é: R$ %.2f\n",saldo);
        break;
    
        case 2:
        printf("Quanto quer depositar\n");
        break;

        case 3:
        printf("Quanto quer sacar\n");
        break;
    
        default:
        printf("Opção não reconhecida\n");
        break;
    }

    return 0;
}