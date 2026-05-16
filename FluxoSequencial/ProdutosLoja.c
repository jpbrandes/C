#include <stdio.h>

int main() {

    double valorCompra, valorVenda, prestacao, numPrestacoes = 5;

    printf("Digite o valor de compra do produto: ");
    scanf("%lf", &valorCompra);

    valorVenda = valorCompra + (valorCompra * 0.45);

    printf("O valor de venda do produto é: %.2lf\n", valorVenda);
    prestacao = valorVenda / numPrestacoes;
    printf("O valor de cada prestação é: %.2lf\n", prestacao);

    return 0;
}