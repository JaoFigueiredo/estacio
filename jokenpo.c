#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, random;

    // inicializa a semente do rand uma única vez
    srand(time(0));

    // loop até opção válida
    do {
        printf("Escolha seu destino\n\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao != 1 && opcao != 2 && opcao != 3) {
            printf("\nOpção inválida! Tente novamente.\n\n");
        }
    } while (opcao != 1 && opcao != 2 && opcao != 3);

    // gera jogada do computador
    random = (rand() % 3) + 1;

    switch (opcao) {
        case 1: // Pedra
            if (random == 1) printf("Você escolheu Pedra, eu escolhi Pedra → EMPATE!\n");
            else if (random == 2) printf("Você escolheu Pedra, eu escolhi Papel → VOCÊ PERDEU!\n");
            else printf("Você escolheu Pedra, eu escolhi Tesoura → VOCÊ VENCEU!\n");
            break;

        case 2: // Papel
            if (random == 1) printf("Você escolheu Papel, eu escolhi Pedra → VOCÊ VENCEU!\n");
            else if (random == 2) printf("Você escolheu Papel, eu escolhi Papel → EMPATE!\n");
            else printf("Você escolheu Papel, eu escolhi Tesoura → VOCÊ PERDEU!\n");
            break;

        case 3: // Tesoura
            if (random == 1) printf("Você escolheu Tesoura, eu escolhi Pedra → VOCÊ PERDEU!\n");
            else if (random == 2) printf("Você escolheu Tesoura, eu escolhi Papel → VOCÊ VENCEU!\n");
            else printf("Você escolheu Tesoura, eu escolhi Tesoura → EMPATE!\n");
            break;
    }

    return 0;
}
