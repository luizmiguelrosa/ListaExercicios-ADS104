#include <stdio.h>

int main()
{
    float peso_morangos, peso_macas, peso_total, preco_total;
    
    preco_total = 0;
    
    printf("Digite o peso em Kg de Morangos: ");
    scanf("%f", &peso_morangos);
    
    printf("Digite o peso em Kg de Maçãs: ");
    scanf("%f", &peso_macas);
    
    peso_total = peso_morangos + peso_macas;
    
    if (peso_morangos <= 5)
        preco_total += 7.5 * peso_morangos;
    else
        preco_total += 5.3 * peso_morangos;
    
    if (peso_macas <=5)
        preco_total += 3.5 * peso_macas;
    else
        preco_total += 2.8 * peso_macas;
    
    if (peso_total < 5 && preco_total > 19.0) {
        preco_total = preco_total - (preco_total * 0.08);
        printf("Preço total: R$%.2f, Com 8 porcento de desconto", preco_total);
    }
    else
        printf("Preço total: R$%.2f", preco_total);

    return 0;
}
