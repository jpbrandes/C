#include <stdio.h>

// Subalgoritmo: soma dos cubos de 1 até n
int somaCubos(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma += i * i * i;
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma dos cubos de 1 ate %d = %d\n", n, somaCubos(n));

    return 0;
}