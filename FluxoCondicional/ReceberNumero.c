#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if(numero < 25) {
        printf("O numero %d e menor que 25.\n", numero);
    } else if(numero > 25) {
        printf("O numero %d e maior que 25.\n", numero);
    } else {
        printf("O numero %d e igual a 25.\n", numero);
    }

    if (numero < 80) {
        printf("O numero %d é menor que 80.\n", numero);
    }

    if(numero == 45) {
        printf("O numero %d e igual a 45.\n", numero);
    }



}