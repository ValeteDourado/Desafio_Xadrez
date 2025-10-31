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

    // bispo
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
    // usando DO-WHILE
    int casas_rainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    printf("\n");

    // cavalo
    // movimentado em L: 2 casas para baixo e 1 para a esquerda
    // usando loops aninhados (For/While)
    int casas_baixo = 2;
    int casas_esquerda = 1;
    printf("Movimento do CAVALO:\n");

    // Loop FOR para o movimento vertical (2 casas para baixo)
    for (int k = 1; k <= casas_baixo; k++) {
        printf("Baixo\n");
    }

    // Loop WHILE aninhado para o movimento horizontal (1 casa para esquerda)
    int m = 1;
    while (m <= casas_esquerda) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
