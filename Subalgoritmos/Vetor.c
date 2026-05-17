#include <stdio.h>

// Subalgoritmo: retorna o menor elemento do vetor
int menorElemento(int v[], int n) {
    int menor = v[0];
    int i;

    for (i = 1; i < n; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    return menor;
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

    printf("Menor elemento = %d\n", menorElemento(v, n));

    return 0;
}