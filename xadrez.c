#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita usando while
    printf("\nMovimento do Bispo:\n");
    int bispoCasas = 0;
    while (bispoCasas < 5) {
        printf("Cima Direita\n");
        bispoCasas++;
    }

    // Movimento da Rainha: 8 casas para a esquerda usando do-while
    printf("\nMovimento da Rainha:\n");
    int rainhaCasas = 0;
    do {
        printf("Esquerda\n");
        rainhaCasas++;
    } while (rainhaCasas < 8);

    return 0;
}
