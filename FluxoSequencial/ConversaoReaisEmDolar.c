#include <stdio.h>

int main() {
    double reais, dolar, cotacao, quantidadeDolar;
    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);
    printf("Digite a cotação do dólar: ");
    scanf("%lf", &cotacao);
    dolar = reais / cotacao;
    quantidadeDolar = reais * cotacao;
    printf("O valor em dólares é: %.2lf\n", dolar);
    printf("A quantidade de dólares é: %.2lf\n", quantidadeDolar);

    return 0;
}