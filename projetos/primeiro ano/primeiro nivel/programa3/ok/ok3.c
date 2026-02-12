#include <stdio.h>
#include <string.h>

int pontos_turisticos_esmeraldas = 15;
float populacao_esmeraldas = 0.07;
float area_esmeraldas = 908.5;
float PIB_esmeraldas = 1.2;
char codigo_de_cidade_esmeraldas[] = "A01";
char nome_da_cidade_e_estado_esmeraldas[] = "Esmeraldas, Minas Gerais";

int pontos_turisticos_bh = 20;
float populacao_bh = 2.52;
float area_bh = 331.4;
float PIB_bh = 94.3;
char codigo_de_cidade_bh[] = "A02";
char nome_da_cidade_e_estado_bh[] = "Belo Horizonte, Minas Gerais";

int pontos_turisticos_betim = 10;
float populacao_betim = 0.43;
float area_betim = 345.9;
float PIB_betim = 20.1;
char codigo_de_cidade_betim[] = "A03";
char nome_da_cidade_e_estado_betim[] = "Betim, Minas Gerais";

int pontos_turisticos_mc = 12;
float populacao_mc = 0.41;
float area_mc = 3569.3;
float PIB_mc = 12.7;
char codigo_de_cidade_mc[] = "A04";
char nome_da_cidade_e_estado_mc[] = "Montes Claros, Minas Gerais";

void exibir_dados_da_cidade(char codigo[]) {
    if (strcmp(codigo, "A01") == 0) {
        printf("\nInformações da cidade:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_esmeraldas);
        printf("População: %.2f milhões\n", populacao_esmeraldas);
        printf("Área: %.2f km²\n", area_esmeraldas);
        printf("PIB: %.2f bilhões\n", PIB_esmeraldas);
        printf("Código da cidade: %s\n", codigo_de_cidade_esmeraldas);
        printf("Nome da cidade e do estado: %s\n", nome_da_cidade_e_estado_esmeraldas);
    } else if (strcmp(codigo, "A02") == 0) {
        printf("\nInformações da cidade:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_bh);
        printf("População: %.2f milhões\n", populacao_bh);
        printf("Área: %.2f km²\n", area_bh);
        printf("PIB: %.2f bilhões\n", PIB_bh);
        printf("Código da cidade: %s\n", codigo_de_cidade_bh);
        printf("Nome da cidade e do estado: %s\n", nome_da_cidade_e_estado_bh);
    } else if (strcmp(codigo, "A03") == 0) {
        printf("\nInformações da cidade:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_betim);
        printf("População: %.2f milhões\n", populacao_betim);
        printf("Área: %.2f km²\n", area_betim);
        printf("PIB: %.2f bilhões\n", PIB_betim);
        printf("Código da cidade: %s\n", codigo_de_cidade_betim);
        printf("Nome da cidade e do estado: %s\n", nome_da_cidade_e_estado_betim);
    } else if (strcmp(codigo, "A04") == 0) {
        printf("\nInformações da cidade:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_mc);
        printf("População: %.2f milhões\n", populacao_mc);
        printf("Área: %.2f km²\n", area_mc);
        printf("PIB: %.2f bilhões\n", PIB_mc);
        printf("Código da cidade: %s\n", codigo_de_cidade_mc);
        printf("Nome da cidade e do estado: %s\n", nome_da_cidade_e_estado_mc);
    } else {
        printf("Código da cidade não encontrado.\n");
    }
}

int main() {
    char entrada[50];
    char resposta;

    do {
        printf("Por favor, insira o código da cidade: ");
        fgets(entrada, sizeof(entrada), stdin);

        entrada[strcspn(entrada, "\n")] = '\0';

        exibir_dados_da_cidade(entrada);

        printf("Gostaria de pesquisar outra carta? (S/N): ");
        resposta = getchar();
        getchar();

    } while (resposta == 'S' || resposta == 's');

    printf("Agradeço por pesquisar, se quiser pesquisar por mais cartas, só reiniciar o programa.\n");

    return 0;
}
