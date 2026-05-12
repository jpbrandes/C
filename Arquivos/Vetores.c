#include <stdio.h>

int main(){
  int x, y, soma, vetor[12]; // Declaração de variáveis e do vetor contendo 12 posições, começando no zero.
  
  printf("Digite 12 números para o vetor: ");
  for (int i = 0; i < 12; i++) { // Loop for para ler posições
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


