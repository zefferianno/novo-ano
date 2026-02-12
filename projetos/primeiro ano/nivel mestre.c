#include <stdio.h>

// Constantes para o número de casas a serem movidas
#define NUM_CASAS_TORRE 3
#define NUM_CASAS_BISPO 3
#define NUM_CASAS_RAINHA 3

// Funções recursivas para Torre, Bispo e Rainha
void moverTorre(int casas, char direcao) {
    if (casas == 0) return;
    printf("%s\n", direcao == 'U' ? "Cima" : direcao == 'D' ? "Baixo" : direcao == 'L' ? "Esquerda" : "Direita");
    moverTorre(casas - 1, direcao);
}

void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= casas; j++) {
            printf("Diagonal (%d, %d)\n", x + i, y + j);
        }
    }
    moverBispo(casas - 1, x + 1, y + 1);
}

void moverRainha(int casas, char direcao) {
    if (casas == 0) return;
    printf("%s\n", direcao == 'U' ? "Cima" : direcao == 'D' ? "Baixo" : direcao == 'L' ? "Esquerda" : "Direita");
    moverRainha(casas - 1, direcao);
}

// Função para o movimento do Cavalo
void moverCavalo(int numMovimentos) {
    for (int i = 0; i < numMovimentos; i++) {
        for (int j = 0; j < numMovimentos; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo para cima e direita\n");
                continue;
            }
            if (i == 1 && j == 2) {
                printf("Cavalo para cima e direita\n");
                break;
            }
        }
    }
}

int main() {
    // Movimentos da Torre
    printf("Movimentos da Torre:\n");
    moverTorre(NUM_CASAS_TORRE, 'U');
    printf("\n");

    // Movimentos do Bispo
    printf("Movimentos do Bispo:\n");
    moverBispo(NUM_CASAS_BISPO, 0, 0);
    printf("\n");

    // Movimentos da Rainha
    printf("Movimentos da Rainha:\n");
    moverRainha(NUM_CASAS_RAINHA, 'R');
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimentos do Cavalo:\n");
    moverCavalo(3);
    printf("\n");

    return 0;
}