#include <stdio.h>

int main() {
    // torre
    // direcionado 5 casas para direita
    // usando FOR
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo
    // direcionado 5 casas na diagonal (Cima + Direita)
    // usando WHILE
    int casas_bispo = 5;
    int i = 1;
    printf("Movimento do BISPO:\n");
    while (i <= casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // rainha
    // direcionada 8 casas para a esquerda
    // Usaundo DO-WHILE
    int casas_rainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    return 0;
}
