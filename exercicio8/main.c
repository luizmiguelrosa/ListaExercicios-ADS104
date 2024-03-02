#include <stdio.h>

int main()
{   
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7}
    };
    
    // As variáveis x, y e media são variaveis auxiliares
    int x, y, soma_diagnonal_primaria, soma_diagnonal_secundaria, soma_linhas_pares, soma_linhas_impares, elemento;
    float media;
    
    //          Somas das Diagonais
    x=0;
    for (y = 0; y < 4; y++) {
        soma_diagnonal_primaria += matriz[y][x];
        x++;
    }
    
    printf("Soma da diagonal secundaria: ");
    x=0;
    for (y = 3; y >=0; y--) {
        soma_diagnonal_secundaria += matriz[y][x];
        x++;
    }
    printf("%d", soma_diagnonal_secundaria);
    media = (soma_diagnonal_primaria + soma_diagnonal_secundaria) / 8;
    
    printf("\n");
    
    printf("Média das linhas diagonais: %.1f", media);
    
    printf("\n");
    
    printf("Soma das linhas pares: ");
    for (y = 0; y < 4; y++) {
        if (y % 2 == 0){
            for (x = 0; x < 4; x++){
                soma_linhas_pares += matriz[y][x];
            }
        }
    }
    printf("%d\n", soma_linhas_pares);
    media = soma_linhas_pares / 4;
    printf("Média das linhas pares: %.1f", media);
    
    printf("\n");
    
    printf("Soma das linhas impares: ");
    for (y = 0; y < 4; y++) {
        if (! y % 2 == 0){
            for (x = 0; x < 4; x++){
                soma_linhas_impares += matriz[y][x];
            }
        }
    }
    printf("%d", soma_linhas_pares);

    return 0;
}
