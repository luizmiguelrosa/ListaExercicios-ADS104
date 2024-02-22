#include <stdio.h>

int main()
{
    int primeiro_numero; int segundo_numero; int terceiro_numero; double media;
    
    printf("Digite o 1° valor: ");
    scanf("%d", &primeiro_numero);
    
    printf("Digite o 2° valor: ");
    scanf("%d", &segundo_numero);
    
    printf("Digite o 3° valor: ");
    scanf("%d", &terceiro_numero);
    
    media = (primeiro_numero + segundo_numero + terceiro_numero) / 3;
    
    printf("A média dos 3 valores é %f", media);
    
    return 0;
}
