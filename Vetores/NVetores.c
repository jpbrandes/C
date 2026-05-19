#include <stdio.h>

// Manipulanddo um vetor de N caracteres.

int main() {
    int i, n;

    printf("Digite o valor de N: ");
    scanf("%d", &n); // Ler N.

    int v[n];

    for(i = 0; i <= n-1; i++) {
        printf("nforme o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i<=n-1; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
  return 0;
}
