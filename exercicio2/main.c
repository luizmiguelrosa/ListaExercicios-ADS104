#include <stdio.h>

int main() {
    double segundos;
    int horas, minutos;

    printf("Digite a duracao: ");
    scanf("%lf", &segundos);

    horas = segundos / 3600;
    minutos = ((int)segundos % 3600) / 60;
    segundos = segundos - (horas * 3600) - (minutos * 60);

    printf("%d:%d:%.f", horas, minutos, segundos);

    return 0;
}
