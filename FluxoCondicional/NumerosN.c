#include <stdio.h>

int main() {
    int n, i;
    float numero;

    printf("Digite a quantidade de numeros (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);

        if (numero > 0) {
            printf("Resultado: Positivo\n\n");
        } else if (numero < 0) {
            printf("Resultado: Negativo\n\n");
        } else {
            printf("Resultado: Zero\n\n");
        }
    }

    return 0;
}
