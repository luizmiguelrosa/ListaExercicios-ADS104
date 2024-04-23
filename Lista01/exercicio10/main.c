# include <stdbool.h>
# include <stdio.h>

bool verifica_sinal(int numero) {
    return ! (numero < 0);
}

int main() {
    int numero;
    bool resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = verifica_sinal(numero);
    if (resultado)
        printf("O numero %d e positivo", numero);
    else
        printf("O numero %d e negativo", numero);

    return 1;
}
