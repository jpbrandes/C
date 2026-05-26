#include <stdio.h>
#include <string.h>

#define NOTAS 10

typedef struct {
    char  ra[9];
    int   nota_1;
    int   nota_2;
    int   nota_exame;
    float media;
    char  situacao[3];
} Aluno;

void calcular(Aluno *a) {
    int soma = a->nota_1 + a->nota_2;

    if (soma >= 140) {
        a->nota_exame = -1;
        a->media = soma / 2.0f;
    } else {
        printf("Nota do Exame: ");
        scanf("%d", &a->nota_exame);
        a->media = (soma + a->nota_exame) / 3.0f;
    }

    strcpy(a->situacao, a->media >= 70.0f ? "AP" : "RP");
}

void cadastrar(Aluno turma[], int *qtd) {
    if (*qtd >= NOTAS) { printf("Turma cheia!\n"); return; }

    Aluno *a = &turma[*qtd];

    printf("RA: ");     scanf("%8s", a->ra);
    printf("Nota 1: "); scanf("%d", &a->nota_1);
    printf("Nota 2: "); scanf("%d", &a->nota_2);

    calcular(a);

    printf("Media: %.1f | %s\n", a->media, a->situacao);
    (*qtd)++;
}

void listar(Aluno turma[], int qtd) {
    printf("\n%-10s %4s %4s %4s %7s  %s\n", "RA", "N1", "N2", "NE", "Media", "Sit.");
    for (int i = 0; i < qtd; i++) {
        Aluno *a = &turma[i];
        char ne[5];
        if (a->nota_exame == -1) strcpy(ne, " -- ");
        else sprintf(ne, "%4d", a->nota_exame);
        printf("%-10s %4d %4d %s %7.1f  %s\n",
            a->ra, a->nota_1, a->nota_2, ne, a->media, a->situacao);
    }
}

int main(void) {
    Aluno turma[NOTAS];
    int qtd = 0, op;

    do {
        printf("\n1-Cadastrar  2-Listar  0-Sair\nOpcao: ");
        scanf("%d", &op);
        if (op == 1) cadastrar(turma, &qtd);
        if (op == 2) listar(turma, qtd);
    } while (op != 0);

    return 0;
}
