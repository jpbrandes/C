#include <stdio.h>

int main() {
    double peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%lf", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);
    printf("O Índice de Massa Corporal (IMC) é: %.2lf\n", imc);

    return 0;
}