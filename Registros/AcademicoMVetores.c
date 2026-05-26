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

int ler_nota(const char *msg) {
    int n;
    do {
        printf("%s", msg);
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("  Invalido! Informe um valor entre 0 e 100.\n");
    } while (n < 0 || n > 100);
    return n;
}

void calcular(Aluno *a) {
    int soma = a->nota_1 + a->nota_2;

    if (soma >= 140) {
        a->nota_exame = -1;
        a->media = soma / 2.0f;
    } else {
        a->nota_exame = ler_nota("Nota do Exame: ");
        a->media = (soma + a->nota_exame) / 3.0f;
    }

    strcpy(a->situacao, a->media >= 70.0f ? "AP" : "RP");
}

void cadastrar(Aluno turma[], int *qtd) {
    if (*qtd >= NOTAS) { printf("Turma cheia!\n"); return; }

    Aluno *a = &turma[*qtd];

    printf("RA: ");
    scanf("%8s", a->ra);

    a->nota_1 = ler_nota("Nota 1: ");
    a->nota_2 = ler_nota("Nota 2: ");

    calcular(a);

    printf("Media: %.1f | %s\n", a->media, a->situacao);
    (*qtd)++;
}

void listar(Aluno turma[], int qtd) {
    if (qtd == 0) { printf("Nenhum aluno cadastrado.\n"); return; }

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
