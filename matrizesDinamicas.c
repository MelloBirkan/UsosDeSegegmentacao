#include <stdio.h>
#include <stdlib.h>

int main() {
  int **matriz;
  int linhas, colunas;

  // Solicita o número de linhas e colunas da matriz ao usuário
  printf("Digite o número de linhas: ");
  scanf("%d", &linhas);
  printf("Digite o número de colunas: ");
  scanf("%d", &colunas);

  // Aloca dinamicamente a memória para a matriz
  matriz = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++) {
    matriz[i] = (int *)malloc(colunas * sizeof(int));
  }

  // Preenche a matriz com os valores informados pelo usuário
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("Digite o valor da posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Exibe os valores da matriz
  printf("Valores da matriz:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // Libera a memória alocada para a matriz
  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
