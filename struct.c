#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa *p;
    int n;

    // Solicita o número de pessoas ao usuário
    printf("Digite o número de pessoas: ");
    scanf("%d", &n);

    // Aloca dinamicamente a memória para um vetor de estruturas Pessoa
    p = (Pessoa *)malloc(n * sizeof(Pessoa));

    // Preenche o vetor com os dados das pessoas informados pelo usuário
    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", p[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &p[i].idade);
    }

    // Exibe os dados das pessoas cadastradas
    printf("Pessoas cadastradas:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d: %s, %d anos\n", i + 1, p[i].nome, p[i].idade);
    }

    // Libera a memória alocada para o vetor de estruturas Pessoa
    free(p);

    return 0;
}
