#include <stdio.h>

int main(){
  int x, y, soma, vetor[12];
  
  printf("Digite 12 números para o vetor: ");
  for (int i = 0; i < 12; i++) {
      printf("Posicao [%d]: ", i);
      scanf("%d", &vetor[i]);
  }
  
  printf("\nDigite o valor índice de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);
  
  soma = vetor[x] + vetor[y];
  printf("\nA soma dos valores nas posicoes %d e %d e: %d\n", x, y, soma);
  return 0;
}


