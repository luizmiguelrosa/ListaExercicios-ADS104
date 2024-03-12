# include <stdio.h>
# include <stdlib.h>

int max(int *array, int tamanho) {
    int maior = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (maior < array[i])
            maior = array[i];
    }
    return maior;
}

int min(int *array, int tamanho) {
    int maior = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (maior > array[i])
            maior = array[i];
    }
    return maior;
}

int main() {
    int tamanho_array = 4;
    int *numeros_ptr = NULL;
    int maior_numero, menor_numero;

    numeros_ptr = (int *) malloc(tamanho_array * sizeof(int));
    for (int i = 0; i < tamanho_array; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros_ptr[i]);
    }

    maior_numero = max(numeros_ptr, tamanho_array);
    printf("O maior numero foi %d\n", maior_numero);

    menor_numero = min(numeros_ptr, tamanho_array);
    printf("O menor numero foi %d\n", menor_numero);

    free(numeros_ptr);
    return 0;
}
