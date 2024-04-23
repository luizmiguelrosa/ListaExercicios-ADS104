# include <stdio.h>
# include <stdlib.h>

int main() {
    int tamanho_array = 6;
    int *numeros_ptr = NULL;

    numeros_ptr = (int *) malloc(tamanho_array * sizeof(int));
    for (int i = 0; i < 6; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros_ptr[i]);
        printf("Endereco fisico: %p\n", &numeros_ptr[i]);
    }

    free(numeros_ptr);
    numeros_ptr = NULL;
    return 1;
}
