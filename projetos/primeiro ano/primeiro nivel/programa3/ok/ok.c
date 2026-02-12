#include <stdio.h>
#include <string.h>

int main() {
    char entrada[50];

    printf("Por favor, insira algo: ");
    fgets(entrada, sizeof(entrada), stdin);

    entrada[strcspn(entrada, "\n")] = '\0';

    if (strcmp(entrada, "ES") == 0) {
        printf("ok, a carta é 'minecraft'.\n");
    } else {
        printf("Você inseriu:ES %s\n", entrada);
    }

    entrada[strcspn(entrada, "\n")] = '\0';

    if (strcmp(entrada, "MG") == 0) {
        printf("ok, a carta é:\n 'undertale\n' jogo de simulação pacifista\n criadopor scott cawton.\n");
    } else {
        printf("Você inseriu:ES %s\n", entrada);
    }

    return 0;

}