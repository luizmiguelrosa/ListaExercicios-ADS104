#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cria_espacamento(int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf(" ");
}

int main(int argc, char const *argv[]) {
    FILE *pessoas_arq;
    char c, str_ax[100];
    int index_ax = 0, i;
    char * valores;

    pessoas_arq = fopen("pessoas.txt", "r");
    if (pessoas_arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Nome            Idade\n");
    while ((c = fgetc(pessoas_arq)) != EOF) {
        if (c != '\n') {
            str_ax[index_ax] = c;
            index_ax++;
        } else {
            str_ax[index_ax] = '\0';

            i = 0;
            valores = strtok(str_ax, ";");
            while (valores != NULL) {
                printf("%s      ", valores);
                cria_espacamento(10 - strlen(valores));
                valores = strtok(NULL, valores);
                i++;
            }

            printf("\n");
            
            index_ax = 0;
        }
    }
    fclose(pessoas_arq);
    return 0;
}
