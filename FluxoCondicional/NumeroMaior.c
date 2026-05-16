#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O primeiro numero (%d) e maior que o segundo (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo numero (%d) e maior que o primeiro (%d).\n", num2, num1);
    } else {
        printf("Os numeros sao iguais (%d).\n", num1);
    }

    return 0;
}