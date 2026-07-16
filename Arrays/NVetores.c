#include <stdio.h>
#include <locale.h>
// Manipulanddo um vetor de N caracteres.

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, n, v[n];

    printf("Digite o valor de N: ");
    scanf("%d", &n); // Ler N.

    for(i = 0; i <= n-1; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i<=n-1; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
  return 0;
}
