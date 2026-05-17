#include <stdio.h>

// Subalgoritmo: verifica se é palíndromo
int ehPalindromo(int n) {
    int original = n;
    int reverso = 0;

    while (n > 0) {
        reverso = reverso * 10 + (n % 10);
        n = n / 10;
    }

    if (original == reverso)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPalindromo(n)) {
        printf("%d eh palindromo\n", n);
    } else {
        printf("%d nao eh palindromo\n", n);
    }

    return 0;
}