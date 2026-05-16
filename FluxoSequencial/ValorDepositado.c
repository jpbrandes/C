#include <stdio.h>

int main() {

    double valorDepositado, valorFinal, taxaJuros = 0.70;

    printf("Digite o valor depositado: ");
    scanf("%lf", &valorDepositado);

    valorFinal = valorDepositado + (valorDepositado * (taxaJuros / 100));

    printf("O valor final após o depósito é: %.2lf\n", valorFinal);

    return 0;


}