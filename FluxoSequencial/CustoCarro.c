#include <stdio.h>

int main(){
    double custoCarro, valorImposto, valorFinal;
    printf("Digite o custo do carro: ");
    scanf("%lf", &custoCarro);

    printf("Digite o valor do imposto (em porcentagem): ");
    scanf("%lf", &valorImposto);

    valorImposto = custoCarro * valorImposto / 100; // Convertendo a porcentagem para decimal
    valorFinal = custoCarro + valorImposto;

    printf("O valor do imposto é: R$ %.2lf\n", valorImposto);
    printf("O valor final do carro é: R$ %.2lf\n", valorFinal);

    return 0;

}