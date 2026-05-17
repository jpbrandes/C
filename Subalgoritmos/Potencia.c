#include <stdio.h>

// Subalgoritmo para calcular X^N
double potencia(double x, int n) {
    double resultado = 1.0;
    int i;

    for (i = 0; i < n; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    double x, resultado;
    int n;

    printf("Digite o valor de X (real): ");
    scanf("%lf", &x);

    printf("Digite o valor de N (inteiro): ");
    scanf("%d", &n);

    resultado = potencia(x, n);

    printf("%.2lf elevado a %d = %.2lf\n", x, n, resultado);

    return 0;
}