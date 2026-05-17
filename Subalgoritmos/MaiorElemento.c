#include <stdio.h>

// Subalgoritmo: retorna o maior elemento do vetor
int maiorElemento(int v[], int n) {
    int maior = v[0];
    int i;

    for (i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
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

    printf("Maior elemento = %d\n", maiorElemento(v, n));

    return 0;
}