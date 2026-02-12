#include <stdio.h>

int main() {
    // Definindo as constantes para o movimento das peças
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // Movimentação da Torre
    puts("Movimentando Torre para a direita:");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("> %d° movimento: Direita\n", i + 1);
    }

    // Movimentação do Bispo
    puts("=============================================");
    puts("Movimentando Bispo para a diagonal superior direita:");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("> %d° movimento: Cima, Direita\n", i + 1);
    }

    // Movimentação da Rainha
    puts("=============================================");
    puts("Movimentando Rainha para a esquerda:");
    int i = 0;
    do {
        printf("> %d° movimento: Esquerda\n", i + 1);
        i++;
    } while (i < MOV_RAINHA);

    return 0;
}