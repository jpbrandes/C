#include <stdio.h>

// Subalgoritmo: imprime um número em binário
void imprimirBinario(int n) {
    int bin[32];
    int i = 0;
    int j;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    // imprime ao contrário
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

int main() {
    int n;

    printf("Digite um numero decimal: ");
    scanf("%d", &n);

    printf("Binario: ");
    imprimirBinario(n);

    printf("\n");

    return 0;
}