#include <stdio.h>

int main()
{
    float nota_trabalho, nota_avaliacao, nota_exame, media;
    char conceito[1];
    
    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &nota_trabalho);
    
    printf("Digite a nota da Avaliação Semestral: ");
    scanf("%f", &nota_avaliacao);
    
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &nota_exame);
    
    media = ((nota_trabalho * 2) + (nota_avaliacao * 3) + (nota_exame * 5)) / 10;
    
    if (media >= 8.0 && media <= 10.0)
        conceito[0] = 'A';
    else if (media >= 7.0 && media <= 8.0)
        conceito[0] = 'B';
    else if (media >= 6.0 && media <= 7.0)
        conceito[0] = 'C';
    else if (media >= 5.0 && media <= 6.0)
        conceito[0] = 'D';
    else
        conceito[0] = 'E';
    
    printf("Média ponderada: %.1f, Conceito: %s", media, conceito);

    return 0;
}
