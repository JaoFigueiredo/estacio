#include <stdio.h>
    int main() {
    
    float nota1=0.0, nota2=0.0, media=0.0;

    printf("Digite o valor da primeira nota \n");
    scanf("%f",&nota1);

    printf("Digite o valor da segunda nota\n");
    scanf("%f",&nota2);
    
    media = nota1 + nota2;
    media = media/2;

    printf("O valor da média é %.1f \n",media);

    return 0;
}