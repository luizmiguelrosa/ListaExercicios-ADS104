typedef int Posicao;
typedef struct tipoItem TipoItem;
typedef struct tipoLista TipoLista;

TipoLista* inicializa_lista();
void limpar_lista(TipoLista* Lista);
int vazia(TipoLista* Lista);
void inserir(TipoItem* x, TipoLista* Lista);
TipoItem* remover(Posicao p, TipoLista* Lista);
void imprimir(TipoLista* Lista);
TipoItem* inicializa_item();
void modifica_valor_item(TipoItem* x, int valor);
void imprime_item(TipoItem* x);