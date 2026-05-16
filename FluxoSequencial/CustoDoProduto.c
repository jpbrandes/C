#include <stdio.h>

int main() {
    double custoProduto, valorVenda, acrescimo;
    printf("Digite o custo do produto: ");
    scanf("%lf", &custoProduto);
    
    printf("Digite o valor do acréscimo (em porcentagem): ");
    scanf("%lf", &acrescimo);

    valorVenda = custoProduto + (custoProduto * (acrescimo / 100));
    printf("O valor de venda do produto é: %.2lf\n", valorVenda);
    return 0;
}