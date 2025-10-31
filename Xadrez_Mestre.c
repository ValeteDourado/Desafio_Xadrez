#include <stdio.h>

// funções recursivas:

// torre – se direciona horizontalmente 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// bispo – se direciona na diagonal 5 casas para cima e à direita
// utiliza recursão + loops aninhados
void moverBispo(int casas_verticais, int casas_horizontais) {
    if (casas_verticais == 0 || casas_horizontais == 0)
        return; // condição de parada

    // Loop externo vertical
    for (int i = 0; i < 1; i++) { // apenas 1 interação por chamada recursiva
        // Loop interno horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    // chamada recursiva, diminuindo uma casa em cada direçãp
    moverBispo(casas_verticais - 1, casas_horizontais - 1);
}

// rainha – se direciona horizontalmente 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Loops do cavalo
// cavalo – faz movimento em L: 2 casas para cima e 1 para a direita
void moverCavalo() {
    int casas_cima = 2;
    int casas_direita = 1;

    printf("Movimento do CAVALO:\n");

    // Loop de fora controla o movimento vertical
    for (int i = 1; i <= casas_cima; i++) {
        if (i == 2) {
            printf("Cima\n");
            continue; // ainda há movimento na vertical
        }
        printf("Cima\n");
    }

    // Loop de dentro controla o movimento horizontal
    int j = 1;
    while (j <= casas_direita) {
        if (j > casas_direita) break;
        printf("Direita\n");
        j++;
    }
}

int main() {
    // torre
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(casas_torre);

    printf("\n");

    // bispo
    int casas_bispo = 5;
    printf("Movimento do BISPO:\n");
    moverBispo(casas_bispo, casas_bispo);

    printf("\n");

    // rainha
    int casas_rainha = 8;
    printf("Movimento da RAINHA:\n");
    moverRainha(casas_rainha);

    printf("\n");

    // cavalo
    moverCavalo();

    return 0;
}
