#include <stdio.h>

int main() {
    double custoProduto, valorVenda, lucro, prejuizo, media;
    char quantidadeProdutos[40];

    for(int i = 1; i <= 40; i++) {
        printf("Digite o custo do produto %d: ", i);
        scanf("%lf", &custoProduto);

        valorVenda = custoProduto + (custoProduto * 0.45);
        lucro = valorVenda - custoProduto;
        prejuizo = custoProduto - valorVenda;

        printf("O valor de venda do produto %d é: %.2lf\n", i, valorVenda);
        printf("O lucro do produto %d é: %.2lf\n", i, lucro);
        printf("O prejuízo do produto %d é: %.2lf\n", i, prejuizo);
        printf("------------------------------\n");
    }
} // O segredo é aprender automizarr o processo, ou seja, colocar tudo dentro do for para que ele possa ler os dados de 40 produtos, e dentro do for colocar as condições para calcular o valor de venda, lucro e prejuízo de cada produto.