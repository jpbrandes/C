#include <stdio.h>

// Subalgoritmo (função) para calcular o MDC
int calcularMDC(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int num1, num2, mdc;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    mdc = calcularMDC(num1, num2);

    printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);

    return 0;
}