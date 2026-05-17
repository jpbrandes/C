#include <stdio.h>

int main() {
    int quantidade[100];
    float preco[100];
    float faturamentoTotal = 0;
    int i;

    // Leitura das quantidades vendidas
    printf("Digite a quantidade vendida de cada mercadoria:\n");
    for(i = 0; i < 100; i++) {
        printf("Mercadoria %d: ", i + 1);
        scanf("%d", &quantidade[i]);
    }

    // Leitura dos preços das mercadorias
    printf("\nDigite o preco de cada mercadoria:\n");
    for(i = 0; i < 100; i++) {
        printf("Preco da mercadoria %d: ", i + 1);
        scanf("%f", &preco[i]);
    }

    // Cálculo do faturamento total
    for(i = 0; i < 100; i++) {
        faturamentoTotal += quantidade[i] * preco[i];
    }

    // Exibe o faturamento mensal
    printf("\nFaturamento mensal do armazem: R$ %.2f\n", faturamentoTotal);

    return 0;
}