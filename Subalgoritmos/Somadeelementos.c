#include <stdio.h>

// Subalgoritmo: soma dos elementos do vetor
int somaVetor(int v[], int n) {
    int soma = 0;
    int i;

    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma;
}

int main() {
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Soma dos elementos = %d\n", somaVetor(v, n));

    return 0;
}