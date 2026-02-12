#include <stdio.h>
#include <string.h>

int main() {
    int numCidades = 4;
    char codigos[4][4] = {"A01", "A02", "A03", "A04"};
    char nome[4][100] = {"Esmeraldas", "Belo Horizonte", "Betim", "Montes Claros"};
    int pontosTuristicos[4] = {15, 20, 10, 12};
    double populacao[4] = {0.07 * 1e6, 2.52 * 1e6, 0.43 * 1e6, 0.41 * 1e6};
    double area[4] = {908.50, 331.40, 345.90, 3569.30};
    double pib[4] = {1.20 * 1e9, 94.30 * 1e9, 20.10 * 1e9, 12.70 * 1e9};

    char codigoInserido[4];
    char inserirMais;
    int cidadeEncontrada;
    
    int totalPontosTuristicos = 0;
    double totalPopulacao = 0;
    double totalArea = 0;
    double totalPib = 0;
    int contadorCidades = 0;

    do {
        printf("Por favor, digite o código de uma cidade: ");
        scanf("%s", codigoInserido);

        cidadeEncontrada = 0;
        for (int i = 0; i < numCidades; i++) {
            if (strcmp(codigoInserido, codigos[i]) == 0) {
                totalPontosTuristicos += pontosTuristicos[i];
                totalPopulacao += populacao[i];
                totalArea += area[i];
                totalPib += pib[i];
                contadorCidades++;
                cidadeEncontrada = 1;
                break;
            }
        }

        if (!cidadeEncontrada) {
            printf("Código da cidade não encontrado.\n");
        }

        printf("Quer inserir mais uma cidade? (S/N): ");
        scanf(" %c", &inserirMais);

    } while (inserirMais == 'S' || inserirMais == 's');

    if (contadorCidades > 0) {
        double mediaPontosTuristicos = totalPontosTuristicos / (double)contadorCidades;
        double mediaPopulacao = totalPopulacao / contadorCidades;
        double mediaArea = totalArea / contadorCidades;
        double mediaPib = totalPib / contadorCidades;

        printf("\nMédia dos Pontos Turísticos: %.2f\n", mediaPontosTuristicos);
        printf("Média da População: %.2f\n", mediaPopulacao);
        printf("Média da Área: %.2f km²\n", mediaArea);
        printf("Média do PIB: %.2f bilhões\n", mediaPib / 1e9);
    } else {
        printf("\nNenhuma cidade válida inserida.\n");
    }

    return 0;
}
