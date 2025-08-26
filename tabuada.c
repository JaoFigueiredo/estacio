#include <stdio.h>

int main(){

    int numero=0,i=0;

    printf("Digite o numero que vc quer a tabuada\n");
    scanf("%d",&numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i,numero,i*numero);
    }
    


    return 0;
}