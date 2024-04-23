# include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int soma(int numero1, int numero2) {
    return numero1 + numero2;
}

int triplo(int numero) {
    return numero * 3;
}

int main() {
    int primeiro_numero, segundo_numero, total;

    printf("Digite o 1° numero: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o 2° numero: ");
    scanf("%d", &segundo_numero);

    total = triplo(soma(dobro(primeiro_numero), dobro(segundo_numero)));
    printf("A soma do dobro de %d e %d, triplicada e: %d", primeiro_numero, segundo_numero, total);

    return 1;
}
