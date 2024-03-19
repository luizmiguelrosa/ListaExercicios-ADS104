#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char nome[50];
    float valor_unitario;
    int quantidade;
} Item;

float pegar_valor_total(Item *itens, int *total_itens) {
    float total = 0.0;
    for (int i = 0; i < *total_itens; i++) {
        total += itens[i].quantidade * itens[i].valor_unitario;
    }
    return total;
}

int pegar_total_unidades(Item *itens, int *total_itens) {
    int total = 0;
    for (int i = 0; i < *total_itens; i++) {
        total += itens[i].quantidade;
    }
    return total;
}

void listar(Item *itens, int *total_itens) {
    for (int i = 0; i < *total_itens; i++) {
        printf("(%d) %s | R$%.2f | %d un\n", i+1, itens[i].nome, itens[i].valor_unitario, itens[i].quantidade);
    }
}

void remover(Item *itens, int index, int *total_itens) {
    for (int i = index; i < *total_itens - 1; i ++) {
        itens[i] = itens[i + 1];
    }
    (*total_itens)--;
}

void cabecalho(char *texto) {
    printf("\n-=-=-=-=-=-=- %s -=-=-=-=-=-=-\n", texto);
}

void erro(char *texto) {
    printf("[ERRO] [ %s ]\n", texto);
}

void info(char *texto) {
    printf("(SUCESSO) - %s\n", texto);
}

int main()
{
    int limite_itens, total_itens = 0, escolha, escolha_remover;
    float valor_total;
    Item *itens;

    printf("Digite o limite total de itens: ");
    scanf("%d", &limite_itens);
    itens = (Item *) malloc(limite_itens * sizeof(Item));

    while (true)
    {
        valor_total = pegar_valor_total(itens, &total_itens);
        cabecalho("ADM Mercado");
        printf("[%d] Itens          Valor total: R$%.2f\n\n", total_itens, valor_total);
        printf("(1) Adicionar novo item\n(2) Remover um item\n(3) Relatorio dos itens\n(4) Sair\n\n> ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            if (total_itens < limite_itens) {
                cabecalho("Novo Item");
                printf("Nome do produto: ");
                scanf(" %[^\n]", itens[total_itens].nome);

                printf("Valor unitario: R$");
                scanf("%f", &itens[total_itens].valor_unitario);

                printf("Quantidade: ");
                scanf("%d", &itens[total_itens].quantidade);

                info("Item adicionado !");
                total_itens ++;
            } else {
                erro("Limite de Itens Ocorrido");
            }
            break;
        
        case 2:
            while (true)
            {   if (total_itens > 0) {
                    cabecalho("Remover Item da Compra");
                    listar(itens, &total_itens);

                    printf("\n> ");
                    scanf("%d", &escolha_remover);

                    if (escolha_remover > 0 && escolha_remover <= total_itens) {
                        remover(itens, escolha_remover - 1, &total_itens);
                        break;
                    } else
                        erro("Opcao Invalida");
                } else {
                    erro("Sem itens para remover");
                    break;
                }
            }
            break;
        
        case 3:
            if (total_itens > 0) {
                cabecalho("Relatorio dos Itens");
                listar(itens, &total_itens);

                int total_unidades = pegar_total_unidades(itens, &total_itens);
                printf("\nUnidades: %d    Valor total: R$%.2f\n", total_unidades, valor_total);
            } else {
                erro("Sem itens para gerar Relatorio");
            }
            break;
        
        case 4:
            free(itens);
            return 0;

        default:
            break;
        }
    }

    return 0;
}
