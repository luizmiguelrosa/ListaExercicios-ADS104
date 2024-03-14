# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char telefone[20];
    char cargo[50];
    float salario;
} funcionario;

void inserir(funcionario *funcionarios, int *tamanho_funcionarios, funcionario *funcionario_) {
    funcionarios[*tamanho_funcionarios] = *funcionario_;
    (*tamanho_funcionarios)++;
}

void listar(funcionario *funcionarios, int *tamanho_funcionarios) {
    for (int i = 0; i < *tamanho_funcionarios; i++) {
        funcionario funcionario_ = funcionarios[i];
        if (&funcionario_)
            printf("%d %s %d anos %s %s R$%.2f\n", i, funcionario_.nome, funcionario_.idade, funcionario_.cargo, funcionario_.telefone, funcionario_.salario);
    }
}

int busca_funcionario(funcionario *funcionarios, int *tamanho_funcionarios, char *parametro) {
    for (int i = 0; i < *tamanho_funcionarios; i++) {
        funcionario funcionario_ = funcionarios[i];
        if (strcmp(funcionario_.nome, parametro) == 0 || strcmp(funcionario_.telefone, parametro) == 0)
            return i;
    }
    return -1;
}

void remover(funcionario *funcionarios, int *tamanho_funcionarios, int index) {
    for (int i = index; i < *tamanho_funcionarios - 1; i++)
        funcionarios[i] = funcionarios[i + 1];
    (*tamanho_funcionarios)--;
}

void editar(funcionario *funcionarios, int index, char *nome, int idade, char *telefone, char *cargo, float salario) {
    strcpy(funcionarios[index].nome, nome);
    funcionarios[index].idade = idade;
    strcpy(funcionarios[index].telefone, telefone);
    strcpy(funcionarios[index].cargo, cargo);
    funcionarios[index].salario = salario;
}

int main() {
    funcionario funcionarios[100];
    int tamanho_funcionarios;

    //                  Inserção de funcionários
    funcionario entrada = {"Luiz Miguel", 19, "40028922", "Estagiario", 900.0};
    funcionario entrada2 = {"Ana", 19, "40028922", "Estagiaria", 900.0};

    inserir(funcionarios, &tamanho_funcionarios, &entrada);
    inserir(funcionarios, &tamanho_funcionarios, &entrada2);
    // ---------------------------------------------------------------------------

    listar(funcionarios, &tamanho_funcionarios);

    int posicao = busca_funcionario(funcionarios, &tamanho_funcionarios, "Ana");
    printf("Posicao: %d\n", posicao);

    editar(funcionarios, 1, "Ana", 20, "80000000", "Auxiliar", 1400.0);
    
    remover(funcionarios, &tamanho_funcionarios, 0);
    listar(funcionarios, &tamanho_funcionarios);

    posicao = busca_funcionario(funcionarios, &tamanho_funcionarios, "Ana");
    printf("Posicao: %d\n", posicao);

    return 0;
}
