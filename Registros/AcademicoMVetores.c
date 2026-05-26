#include <stdio.h>
#include <string.h>

#define NOTAS 10

typedef struct {

    char registro_academico[9];

    int nota_1;
    int nota_2;
    int nota_exame;

    float media;

    char situacao;

} Aluno;

int main() {

    Aluno aluno[NOTAS];

    int i;

    for(i = 0; i < NOTAS; i++) {

        printf("\nAluno %d\n", i + 1);

        printf("RA: ");
        scanf("%8s", aluno[i].registro_academico);

        printf("Nota 1: ");
        scanf("%d", &aluno[i].nota_1);

        printf("Nota 2: ");
        scanf("%d", &aluno[i].nota_2);

        if((aluno[i].nota_1 + aluno[i].nota_2) < 140) {

            printf("Nota Exame: ");
            scanf("%d", &aluno[i].nota_exame);

            aluno[i].media =
                (aluno[i].nota_1 +
                 aluno[i].nota_2 +
                 aluno[i].nota_exame) / 3.0;

        } else {

            aluno[i].nota_exame = -1;

            aluno[i].media =
                (aluno[i].nota_1 +
                 aluno[i].nota_2) / 2.0;
        }

        if(aluno[i].media >= 70)
            aluno[i].situacao = 'A';
        else
            aluno[i].situacao = 'R';
    }

    printf("\n\n===== RELATORIO =====\n");

    for(i = 0; i < NOTAS; i++) {

        printf("\nRA: %s", aluno[i].registro_academico);

        printf("\nN1: %d", aluno[i].nota_1);
        printf("\nN2: %d", aluno[i].nota_2);

        if(aluno[i].nota_exame != -1)
            printf("\nExame: %d", aluno[i].nota_exame);
        else
            printf("\nExame: NAO REALIZADO");

        printf("\nMedia: %.2f", aluno[i].media);

        if(aluno[i].situacao == 'A')
            printf("\nSituacao: APROVADO\n");
        else
            printf("\nSituacao: REPROVADO\n");
    }

    return 0;
}
