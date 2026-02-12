#include <stdio.h>
#include <string.h>

void programa() {
    char resposta[100];
    const char* mensagens_inadequadas[] = {"vai se fuder", "teu cu", "SMT!", "seu merda", "filho da puta", "te odeio"};
    int num_mensagens_inadequadas = 5;
    int i, found;

    while (1) {
        printf("Voce me ama? ");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            printf("YEEEEE EU TI AMUH MUITU MUITU MUITU MAIX MINHA POMPOM\n");
            break;
        } else if (strcmp(resposta, "não") == 0) {
            printf("Disculpi, oce digitou errado, tente novamente:\n");
        } else {
            found = 0;
            for (i = 0; i < num_mensagens_inadequadas; i++) {
                if (strcmp(resposta, mensagens_inadequadas[i]) == 0) {
                    printf("HIHIHIHIH tambein ti amuh meuh amor <3\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("diculpi oce escreveu erradu, tente novamente.\n");
            }
        }
    }
}

int main() {
    programa();
    return 0;
}
