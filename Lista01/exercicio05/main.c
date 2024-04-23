#include <stdio.h>

int main()
{
    int escolha;
    float primeiro_numero, segundo_numero;
    
    printf("-=-=-=-=-= Calculadora =-=-=-=-=-\n");
    printf("(1) Adição\n(2) Subtração\n(3) Multiplicação\n(4) Divisão\n\n> ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            printf("-=-=-=-=-= Adição =-=-=-=-=-\n");
            printf("Digite o 1° número: ");
            scanf("%f", &primeiro_numero);
            
            printf("Digite o 2° número: ");
            scanf("%f", &segundo_numero);
            
            printf("A adição dos valores é igual a %f", primeiro_numero + segundo_numero);
            break;
        case 2:
            printf("-=-=-=-=-= Subtração =-=-=-=-=-\n");
            printf("Digite o 1° número: ");
            scanf("%f", &primeiro_numero);
            
            printf("Digite o 1° número: ");
            scanf("%f", &segundo_numero);
            
            printf("A subtração dos valores é igual a %f", primeiro_numero - segundo_numero);
            break;
        case 3:
            printf("-=-=-=-=-= Multiplicação =-=-=-=-=-\n");
            printf("Digite o 1° número: ");
            scanf("%f", &primeiro_numero);
            
            printf("Digite o 1° número: ");
            scanf("%f", &segundo_numero);
            
            printf("A multiplicação dos valores é igual a %f", primeiro_numero * segundo_numero);
            break;
        case 4:
            printf("-=-=-=-=-= Divisão =-=-=-=-=-\n");
            printf("Digite o 1° número: ");
            scanf("%f", &primeiro_numero);
            
            printf("Digite o 1° número: ");
            scanf("%f", &segundo_numero);
            
            printf("A divisão dos valores é igual a %f", primeiro_numero / segundo_numero);
            break;
    }

    return 0;
}
