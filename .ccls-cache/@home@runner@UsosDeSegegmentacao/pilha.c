#include <stdio.h>
#include <stdlib.h>

// Define a estrutura No para representar um elemento da pilha
typedef struct No {
    int valor;
    struct No *proximo;
} No;

// Função para empilhar um valor na pilha
No *empilhar(No *topo, int valor) {
    No *novo_no = (No *)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = topo;
    return novo_no;
}

// Função para desempilhar o elemento do topo da pilha
No *desempilhar(No *topo) {
    if (topo != NULL) {
        No *temp = topo;
        topo = topo->proximo;
        free(temp);
    }
    return topo;
}

// Função para exibir os elementos da pilha
void exibir_pilha(No *topo) {
    No *atual = topo;
    printf("Pilha:\n");
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
}

int main() {
    No *topo = NULL;
    int valor, opcao;

    // Laço do menu interativo
    do {
        printf("Digite 1 para empilhar, 2 para desempilhar ou 0 para sair: ");
        scanf("%d", &opcao);

        // Empilha o valor fornecido pelo usuário
        if (opcao == 1) {
            printf("Digite o valor a ser empilhado: ");
            scanf("%d", &valor);
            topo = empilhar(topo, valor);
        }
        // Desempilha o elemento do topo da pilha
        else if (opcao == 2) {
            topo = desempilhar(topo);
        }

        // Exibe os elementos da pilha após cada operação
        exibir_pilha(topo);
    } while (opcao != 0);

    // Desempilha todos os elementos restantes antes de encerrar o programa
    while (topo != NULL) {
        topo = desempilhar(topo);
    }

    return 0;
}
