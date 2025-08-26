int main(){

    int opcao=0;

    do
    {
        printf("1. opcao 1 \n");
        printf("2. opcao 2 \n");
        printf("3. opcao 3 \n");
        printf("4. opcao 4 \n");
        scanf("%d",&opcao);

        if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
                printf("\nOpção Invalida\n");
        }
        

    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4);
    
    switch (opcao)
    {
    case 1:
        printf("Caso 1\n");
        break;
    
     case 2:
        printf("Caso 2\n");
        break;
     case 3:
        printf("Caso 3\n");
        break;
     case 4:
        printf("Caso 4\n");
        break;
        
    default:
        break;
    }


    return 0;
}
