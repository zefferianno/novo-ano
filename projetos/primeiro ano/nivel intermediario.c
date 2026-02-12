#include <stdio.h>

int main() {
    // Definindo as constantes para o movimento do Cavalo
    const int MOVIMENTO_VERTICAL = 2;
    const int MOVIMENTO_HORIZONTAL = 1;

    // Movimentação do Cavalo
    printf("Movimentando o Cavalo:\n");

    // Loop para movimentação vertical (duas casas para baixo)
    for (int i = 0; i < MOVIMENTO_VERTICAL; i++) {
        printf("Baixo\n");
    }

    // Loop para movimentação horizontal (uma casa para a esquerda)
    int j = 0;
    while (j < MOVIMENTO_HORIZONTAL) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
