#include <stdio.h>

int main() {
    double nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média das três notas é: %.2lf\n", media);
    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else if (media >= 5.0) {
        printf("Recuperação!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}