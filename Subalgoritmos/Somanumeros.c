#include <stdio.h>

// Subalgoritmo: soma de 0 até N
int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 0; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int n, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    resultado = somaAteN(n);

    printf("Soma de 0 ate %d = %d\n", n, resultado);

    return 0;
}