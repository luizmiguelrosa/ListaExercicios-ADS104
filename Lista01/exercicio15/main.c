#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char **str, int str_len, char *value) {
    int total = 0;
    for (int i = 0; i < str_len; i++) {
        if (strcmp(str[i], value) == 0) {
            total++;
        }
    }
    return total;
}

int main(int argc, char const *argv[]) {
    FILE *pessoas_arq;
    char c, str_ax[100];
    int index_ax = 0;

    pessoas_arq = fopen("pessoas.txt", "r");
    if (pessoas_arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(pessoas_arq)) != EOF) {
        if (c != '\n') {
            str_ax[index_ax] = c;
            index_ax++;
        } else {
            str_ax[index_ax] = '\0'; // Adiciona o caractere nulo no final da string
            printf("%s %d\n", str_ax, count(&str_ax, index_ax, ";"));
            index_ax = 0;
        }
    }

    fclose(pessoas_arq);
    return 0;
}
