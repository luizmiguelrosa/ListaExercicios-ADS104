#include <stdio.h>

int main()
{
    int entrada, quantidade;
    int vetor_pares[12], vetor_impares[12];
    int quantidade_pares, quantidade_impares;
    
    for (quantidade; quantidade < 12; quantidade++) {
        printf("Digite o %d° número: ", quantidade+1);
        scanf("%d", &entrada);
        
        if (entrada % 2 == 0) {
            vetor_pares[quantidade_pares] = entrada;
            quantidade_pares++;
        } 
        else {
            vetor_impares[quantidade_impares] = entrada;
            quantidade_impares++;
        }
    }
    
    printf("Pares: ");
    for (quantidade = 0; quantidade < quantidade_pares; quantidade++) {
        printf("%d ", vetor_pares[quantidade]);
    }
    
    printf("\n");
    
    printf("Impares: ");
    for (quantidade = 0; quantidade < quantidade_impares; quantidade++) {
        printf("%d ", vetor_impares[quantidade]);
    }

    return 0;
}
