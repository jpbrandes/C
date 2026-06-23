#include <stdio.h>

int main() {
    float valor_compra, valor_pago, troco;
    int centavos, qtd;

    // Leitura dos dados de entrada
    printf("Valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Valor pago: ");
    scanf("%f", &valor_pago);

    // Validação se o dinheiro é suficiente
    if (valor_pago < valor_compra) {
        printf("Erro: Valor pago eh insuficiente.\n");
    } else {
        troco = valor_pago - valor_compra;
        printf("Troco: R$ %.2f\n", troco);

        // Convertendo o troco para centavos inteiros.
        // Somamos 0.5 antes de converter para int para garantir o arredondamento correto.
        centavos = (int)(troco * 100 + 0.5);

        // Verificação de Cédulas (valores em centavos)
        qtd = centavos / 10000; // R$ 100.00 -> 10000 centavos
        if (qtd > 0) { printf("%dx R$ 100.00\n", qtd); centavos %= 10000; }

        qtd = centavos / 5000;  // R$ 50.00 -> 5000 centavos
        if (qtd > 0) { printf("%dx R$ 50.00\n", qtd); centavos %= 5000; }

        qtd = centavos / 2000;  // R$ 20.00 -> 2000 centavos
        if (qtd > 0) { printf("%dx R$ 20.00\n", qtd); centavos %= 2000; }

        qtd = centavos / 1000;  // R$ 10.00 -> 1000 centavos
        if (qtd > 0) { printf("%dx R$ 10.00\n", qtd); centavos %= 1000; }

        qtd = centavos / 500;   // R$ 5.00 -> 500 centavos
        if (qtd > 0) { printf("%dx R$ 5.00\n", qtd); centavos %= 500; }

        qtd = centavos / 200;   // R$ 2.00 -> 200 centavos
        if (qtd > 0) { printf("%dx R$ 2.00\n", qtd); centavos %= 200; }

        // Verificação de Moedas (valores em centavos)
        qtd = centavos / 100;   // R$ 1.00 -> 100 centavos
        if (qtd > 0) { printf("%dx R$ 1.00\n", qtd); centavos %= 100; }

        qtd = centavos / 50;    // R$ 0.50 -> 50 centavos
        if (qtd > 0) { printf("%dx R$ 0.50\n", qtd); centavos %= 50; }

        qtd = centavos / 25;    // R$ 0.25 -> 25 centavos
        if (qtd > 0) { printf("%dx R$ 0.25\n", qtd); centavos %= 25; }

        qtd = centavos / 10;    // R$ 0.10 -> 10 centavos
        if (qtd > 0) { printf("%dx R$ 0.10\n", qtd); centavos %= 10; }

        qtd = centavos / 5;     // R$ 0.05 -> 5 centavos
        if (qtd > 0) { printf("%dx R$ 0.05\n", qtd); centavos %= 5; }

        qtd = centavos / 1;     // R$ 0.01 -> 1 centavo
        if (qtd > 0) { printf("%dx R$ 0.01\n", qtd); }
    }

    return 0;
}
