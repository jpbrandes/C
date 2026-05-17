#include <stdio.h>

void mostrarPares(int n) {
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Numeros pares de 0 ate %d:\n", n);
    mostrarPares(n);

    return 0;
}