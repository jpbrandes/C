#include <stdio.h>
#include <string.h>

#define NOTAS 10

char  ra[NOTAS][9];
int   nota_1[NOTAS];
int   nota_2[NOTAS];
int   nota_exame[NOTAS];
float media[NOTAS];
char  situacao[NOTAS][3];

int ra_valido(const char *r) {
    int len = strlen(r);
    if (len < 1 || len > 8) return 0;
    for (int i = 0; i < len; i++)
        if (r[i] < '0' || r[i] > '9') return 0;
    return 1;
}

int ra_duplicado(int qtd, const char *r) {
    for (int i = 0; i < qtd; i++)
        if (strcmp(ra[i], r) == 0) return 1;
    return 0;
}

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

void calcular(int i) {
    int soma = nota_1[i] + nota_2[i];

    if (soma >= 140) {
        nota_exame[i] = -1;
        media[i] = soma / 2.0f;
    } else {
        nota_exame[i] = ler_nota("Nota do Exame: ");
        media[i] = (soma + nota_exame[i]) / 3.0f;
    }

    strcpy(situacao[i], media[i] >= 70.0f ? "AP" : "RP");
}

void cadastrar(int *qtd) {
    if (*qtd >= NOTAS) { printf("Turma cheia!\n"); return; }

    int i = *qtd;

    do {
        printf("RA (somente numeros, ate 8 digitos): ");
        scanf("%8s", ra[i]);
        if (!ra_valido(ra[i]))
            printf("  RA invalido! Use apenas digitos numericos.\n");
        else if (ra_duplicado(i, ra[i]))
            printf("  RA ja cadastrado!\n");
        else
            break;
    } while (1);

    nota_1[i] = ler_nota("Nota 1: ");
    nota_2[i] = ler_nota("Nota 2: ");

    calcular(i);

    printf("Media: %.1f | %s\n", media[i], situacao[i]);
    (*qtd)++;
}

void listar(int qtd) {
    if (qtd == 0) { printf("Nenhum aluno cadastrado.\n"); return; }

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
