#include <stdio.h>

int main() {
    char nome[50];
    float salario, vendas, comissao, total;

    printf("Digite o nome do vendedor: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salario);

    printf("Digite o total de vendas realizadas pelo vendedor: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.12; // Supondo que a comissão seja de 12% sobre as vendas
    total = salario + comissao;

    printf("O total a receber do vendedor %s é: R$ %.2f\n", nome, total);

    return 0;
}