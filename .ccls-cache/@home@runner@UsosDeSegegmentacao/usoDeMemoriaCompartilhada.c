#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

No *empilhar(No *topo, int valor) {
    No *novo_no = (No *)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = topo;
    return novo_no;
}

No *desempilhar(No *topo) {
    if (topo != NULL) {
        No *temp = topo;
        topo = topo->proximo;
        free(temp);
    }
    return topo;
}

int main() {
    No *topo = NULL;
    topo = empilhar(topo, 5);
    topo = empilhar(topo, 10);
    topo = empilhar(topo, 15);
    topo = desempilhar(topo);
    return 0;
}
