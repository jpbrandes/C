#include <stdio.h>
int main() {
    float distancia, combustivel, consumoMedio, totalgasto;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustível consumida (em litros): ");
    scanf("%f", &combustivel);

    if (combustivel != 0) {
        consumoMedio = distancia / combustivel;
        printf("O consumo médio do veículo é: %.2f km/l\n", consumoMedio);
    } else {
        printf("A quantidade de combustível consumida não pode ser zero.\n");
    }

    if (combustivel = combustivel) {
        totalgasto = combustivel * 5.50; // Supondo que o preço do combustível seja R$ 5,50 por litro
        printf("O total gasto com combustível é: R$ %.2f\n", totalgasto);
    }

    return 0;
}