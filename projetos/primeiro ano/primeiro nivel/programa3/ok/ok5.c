#include <stdio.h>
#include <string.h>

int pontos_turisticos_esmeraldas = 15;
float populacao_esmeraldas = 0.07;
float area_esmeraldas = 908.5;
float PIB_esmeraldas = 1.2;
char codigo_de_carta_esmeraldas[] = "A01";
char nome_da_carta_e_estado_esmeraldas[] = "Esmeraldas, Minas Gerais";

int pontos_turisticos_bh = 20;
float populacao_bh = 2.52;
float area_bh = 331.4;
float PIB_bh = 94.3;
char codigo_de_carta_bh[] = "A02";
char nome_da_carta_e_estado_bh[] = "Belo Horizonte, Minas Gerais";

int pontos_turisticos_betim = 10;
float populacao_betim = 0.43;
float area_betim = 345.9;
float PIB_betim = 20.1;
char codigo_de_carta_betim[] = "A03";
char nome_da_carta_e_estado_betim[] = "Betim, Minas Gerais";

int pontos_turisticos_mc = 12;
float populacao_mc = 0.41;
float area_mc = 3569.3;
float PIB_mc = 12.7;
char codigo_de_carta_mc[] = "A04";
char nome_da_carta_e_estado_mc[] = "Montes Claros, Minas Gerais";

void exibir_dados_da_carta(char codigo[]) {
    if (strcmp(codigo, "A01") == 0) {
        printf("\nInformações da carta:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_esmeraldas);
        printf("População: %.2f milhões\n", populacao_esmeraldas);
        printf("Área: %.2f km²\n", area_esmeraldas);
        printf("PIB: %.2f bilhões\n", PIB_esmeraldas);
        printf("Código da carta: %s\n", codigo_de_carta_esmeraldas);
        printf("Nome da carta e do estado: %s\n", nome_da_carta_e_estado_esmeraldas);
    } else if (strcmp(codigo, "A02") == 0) {
        printf("\nInformações da carta:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_bh);
        printf("População: %.2f milhões\n", populacao_bh);
        printf("Área: %.2f km²\n", area_bh);
        printf("PIB: %.2f bilhões\n", PIB_bh);
        printf("Código da carta: %s\n", codigo_de_carta_bh);
        printf("Nome da carta e do estado: %s\n", nome_da_carta_e_estado_bh);
    } else if (strcmp(codigo, "A03") == 0) {
        printf("\nInformações da carta:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_betim);
        printf("População: %.2f milhões\n", populacao_betim);
        printf("Área: %.2f km²\n", area_betim);
        printf("PIB: %.2f bilhões\n", PIB_betim);
        printf("Código da carta: %s\n", codigo_de_carta_betim);
        printf("Nome da carta e do estado: %s\n", nome_da_carta_e_estado_betim);
    } else if (strcmp(codigo, "A04") == 0) {
        printf("\nInformações da carta:\n");
        printf("Pontos turísticos: %d\n", pontos_turisticos_mc);
        printf("População: %.2f milhões\n", populacao_mc);
        printf("Área: %.2f km²\n", area_mc);
        printf("PIB: %.2f bilhões\n", PIB_mc);
        printf("Código da carta: %s\n", codigo_de_carta_mc);
        printf("Nome da carta e do estado: %s\n", nome_da_carta_e_estado_mc);
    } else {
        printf("Código da carta não encontrado.\n");
    }
}

void comparar_cartas(char codigo1[], char codigo2[]) {
    int pontos1, pontos2;
    float populacao1, populacao2, area1, area2, PIB1, PIB2;

    if (strcmp(codigo1, "A01") == 0) {
        pontos1 = pontos_turisticos_esmeraldas;
        populacao1 = populacao_esmeraldas;
        area1 = area_esmeraldas;
        PIB1 = PIB_esmeraldas;
    } else if (strcmp(codigo1, "A02") == 0) {
        pontos1 = pontos_turisticos_bh;
        populacao1 = populacao_bh;
        area1 = area_bh;
        PIB1 = PIB_bh;
    } else if (strcmp(codigo1, "A03") == 0) {
        pontos1 = pontos_turisticos_betim;
        populacao1 = populacao_betim;
        area1 = area_betim;
        PIB1 = PIB_betim;
    } else if (strcmp(codigo1, "A04") == 0) {
        pontos1 = pontos_turisticos_mc;
        populacao1 = populacao_mc;
        area1 = area_mc;
        PIB1 = PIB_mc;
    } else {
        printf("Código da primeira carta não encontrado.\n");
        return;
    }

    if (strcmp(codigo2, "A01") == 0) {
        pontos2 = pontos_turisticos_esmeraldas;
        populacao2 = populacao_esmeraldas;
        area2 = area_esmeraldas;
        PIB2 = PIB_esmeraldas;
    } else if (strcmp(codigo2, "A02") == 0) {
        pontos2 = pontos_turisticos_bh;
        populacao2 = populacao_bh;
        area2 = area_bh;
        PIB2 = PIB_bh;
    } else if (strcmp(codigo2, "A03") == 0) {
        pontos2 = pontos_turisticos_betim;
        populacao2 = populacao_betim;
        area2 = area_betim;
        PIB2 = PIB_betim;
    } else if (strcmp(codigo2, "A04") == 0) {
        pontos2 = pontos_turisticos_mc;
        populacao2 = populacao_mc;
        area2 = area_mc;
        PIB2 = PIB_mc;
    } else {
        printf("Código da segunda carta não encontrado.\n");
        return;
    }

    printf("\nComparação das cartas:\n");

    printf("Pontos turísticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 vence\n");
    } else if (pontos1 < pontos2) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    printf("População: ");
    if (populacao1 < populacao2) {
        printf("Carta 1 vence\n");
    } else if (populacao1 > populacao2) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 vence\n");
    } else if (area1 < area2) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    printf("PIB: ");
    if (PIB1 > PIB2) {
        printf("Carta 1 vence\n");
    } else if (PIB1 < PIB2) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }
}

int main() {
    char resposta, inserirMais, codigoInserido[4], codigo1[4], codigo2[4];
    int totalPontosTuristicos = 0, contadorCartas = 0;
    double totalPopulacao = 0, totalArea = 0, totalPib = 0;

    printf("Você gostaria de pesquisar uma carta(S/N): ");
    resposta = getchar();
    getchar();

    if (resposta == 'S' || resposta == 's') {
        do {
            printf("Insira o código da carta: ");
            fgets(codigoInserido, sizeof(codigoInserido), stdin);
            codigoInserido[strcspn(codigoInserido, "\n")] = '\0';
            exibir_dados_da_carta(codigoInserido);
            printf("Gostaria de pesquisar outra carta? (S/N): ");
            resposta = getchar();
            getchar();
        } while (resposta == 'S' || resposta == 's');
    } else {
        printf("Então gostaria de tirar a média de informações de cada carta? (S/N): ");
        resposta = getchar();
        getchar();

        if (resposta == 'S' || resposta == 's') {
            do {
                printf("Insira o código da primeira carta: ");
                scanf("%s", codigoInserido);
                getchar();

                if (strcmp(codigoInserido, "A01") == 0) {
                    totalPontosTuristicos += pontos_turisticos_esmeraldas;
                    totalPopulacao += populacao_esmeraldas;
                    totalArea += area_esmeraldas;
                    totalPib += PIB_esmeraldas;
                } else if (strcmp(codigoInserido, "A02") == 0) {
                    totalPontosTuristicos += pontos_turisticos_bh;
                    totalPopulacao += populacao_bh;
                    totalArea += area_bh;
                    totalPib += PIB_bh;
                } else if (strcmp(codigoInserido, "A03") == 0) {
                    totalPontosTuristicos += pontos_turisticos_betim;
                    totalPopulacao += populacao_betim;
                    totalArea += area_betim;
                    totalPib += PIB_betim;
                } else if (strcmp(codigoInserido, "A04") == 0) {
                    totalPontosTuristicos += pontos_turisticos_mc;
                    totalPopulacao += populacao_mc;
                    totalArea += area_mc;
                    totalPib += PIB_mc;
                } else {
                    printf("Código da carta não encontrado.\n");
                }

                contadorCartas++;
                printf("Gostaria de incluir outra carta para tirar a média? (S/N): ");
                inserirMais = getchar();
                getchar();
            } while (inserirMais == 'S' || inserirMais == 's');

            if (contadorCartas > 0) {
                double mediaPontosTuristicos = totalPontosTuristicos / (double)contadorCartas;
                double mediaPopulacao = totalPopulacao / contadorCartas;
                double mediaArea = totalArea / contadorCartas;
                double mediaPib = totalPib / contadorCartas;

                printf("\nMédia dos Pontos Turísticos: %.2f\n", mediaPontosTuristicos);
                printf("Média da População: %.2f milhões\n", mediaPopulacao);
                printf("Média da Área: %.2f km²\n", mediaArea);
                printf("Média do PIB: %.2f bilhões\n", mediaPib / 1e9);
            } else {
                printf("\nNenhuma carta válida inserida.\n");
            }
        } else {
            printf("Então gostaria de comparar duas cartas para decidir a vencedora? (S/N): ");
            resposta = getchar();
            getchar();

            if (resposta == 'S' || resposta == 's') {
                do {
                    printf("Então digite o código da primeira carta: ");
                    scanf("%s", codigo1);
                    getchar();
                    printf("Agora digite o código da segunda carta: ");
                    scanf("%s", codigo2);
                    getchar();

                    comparar_cartas(codigo1, codigo2);

                    printf("Gostaria de comparar outras cartas? (S/N): ");
                    resposta = getchar();
                    getchar();
                } while (resposta == 'S' || resposta == 's');
            } else {
                printf("Ok, muito obrigado por ter usado esse programa, feito por mim.\n");
            }
        }
    }

    return 0;
}