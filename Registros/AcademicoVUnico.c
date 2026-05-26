#include <stdio.h>
#include <string.h>

#define NOTAS 10

char  ra[NOTAS][9];
int   nota_1[NOTAS];
int   nota_2[NOTAS];
int   nota_exame[NOTAS];
float media[NOTAS];
char  situacao[NOTAS][3];

void calcular(int i) {
    int soma = nota_1[i] + nota_2[i];

    if (soma >= 140) {
        nota_exame[i] = -1;
        media[i] = soma / 2.0f;
    } else {
        printf("Nota do Exame: ");
        scanf("%d", &nota_exame[i]);
        media[i] = (soma + nota_exame[i]) / 3.0f;
    }

    strcpy(situacao[i], media[i] >= 70.0f ? "AP" : "RP");
}

void cadastrar(int *qtd) {
    if (*qtd >= NOTAS) { printf("Turma cheia!\n"); return; }

    int i = *qtd;

    printf("RA: ");     scanf("%8s", ra[i]);
    printf("Nota 1: "); scanf("%d", &nota_1[i]);
    printf("Nota 2: "); scanf("%d", &nota_2[i]);

    calcular(i);

    printf("Media: %.1f | %s\n", media[i], situacao[i]);
    (*qtd)++;
}

void listar(int qtd) {
    printf("\n%-10s %4s %4s %4s %7s  %s\n", "RA", "N1", "N2", "NE", "Media", "Sit.");
    for (int i = 0; i < qtd; i++) {
        char ne[5];
        if (nota_exame[i] == -1) strcpy(ne, " -- ");
        else sprintf(ne, "%4d", nota_exame[i]);
        printf("%-10s %4d %4d %s %7.1f  %s\n",
            ra[i], nota_1[i], nota_2[i], ne, media[i], situacao[i]);
    }
}

int main(void) {
    int qtd = 0, op;

    do {
        printf("\n1-Cadastrar  2-Listar  0-Sair\nOpcao: ");
        scanf("%d", &op);
        if (op == 1) cadastrar(&qtd);
        if (op == 2) listar(qtd);
    } while (op != 0);

    return 0;
}
