#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define Inicio 0
#define MaxLength 1000

struct tipoItem
{
    int valor;
};

struct tipoLista
{
    TipoItem Item[MaxLength];
    Posicao Primeiro, Ultimo;
};

TipoLista* inicializa_lista() {
    TipoLista* lista = (TipoLista *) malloc(sizeof(TipoLista));
    return lista;
}

TipoItem* inicializa_item() {
    TipoItem* item = (TipoItem *) malloc(sizeof(TipoItem));
    return item;
}

void limpar_lista(TipoLista* Lista) {
    Lista->Primeiro = Inicio;
    Lista->Ultimo = Lista->Primeiro;
}

int vazia(TipoLista* Lista) {
    return (Lista->Primeiro == Lista->Ultimo);
}

void inserir(TipoItem* item, TipoLista* Lista) {
    if (Lista->Ultimo >= MaxLength)
        printf("Tamanho maximo da lista atingido !\n");
    else {
        Lista->Item[Lista->Ultimo] = *item;
        Lista->Ultimo++;
    }
}

TipoItem* remover(Posicao p, TipoLista* Lista) {
    int Aux; TipoItem* item;
    item = (TipoItem*) malloc(sizeof(TipoItem));
    if (vazia(Lista) || p >= Lista->Ultimo) {
        printf("Posicao inexistente !\n");
        return NULL;
    }
    *item = Lista->Item[p];
    Lista->Ultimo--;
    for (Aux = p; Aux < Lista->Ultimo; Aux++){
        Lista->Item[Aux] = Lista->Item[Aux + 1];
    }
    return item;
}

int main(int argc, char const *argv[])
{
    TipoLista* lista;
    TipoItem* itemAux;
    
    lista = inicializa_lista();
    itemAux = inicializa_item();
    
    itemAux->valor = 10;

    inserir(itemAux, lista);

    printf("Valor: %d\n", lista->Item[0].valor);
    printf("Tamanho: %d\n", lista->Ultimo);

    remover(0, lista);

    printf("Valor: %d\n", lista->Item[0].valor);
    printf("Tamanho: %d\n", lista->Ultimo);

    return 0;
}
