#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("O valor de A é: %d\n", a);
    printf("O valor de B é: %d\n", b);
    printf("------------------------------\n");
    printf("O valor de A é: %d\n", b);
    printf("O valor de B é: %d\n", a);
    return 0;
    
}