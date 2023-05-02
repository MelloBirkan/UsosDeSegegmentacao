#include <stdio.h>
#include <stdlib.h>

int main() {
  int *vetor;
  int tamanho;

  // Solicita o tamanho do vetor ao usuário
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  // Aloca dinamicamente a memória para o vetor de acordo com o tamanho
  // informado
  vetor = (int *)malloc(tamanho * sizeof(int));

  // Verifica se a alocação de memória foi bem-sucedida
  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  // Preenche o vetor com os valores informados pelo usuário
  for (int i = 0; i < tamanho; i++) {
    printf("Digite o valor da posição %d: ", i);
    scanf("%d", &vetor[i]);
  }

  // Exibe os valores do vetor
  printf("Valores do vetor:\t");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }

  // Libera a memória alocada para o vetor
  free(vetor);

  return 0;
}
