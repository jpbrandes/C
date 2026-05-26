#include <stdio.h>
#include <string.h>

#define NOTAS 10

int main() {

    char registro_academico[NOTAS][9];
    char situacao[NOTAS];

    int nota_1[NOTAS];
    int nota_2[NOTAS];
    int nota_exame[NOTAS];

    float media[NOTAS];

    int i;

    for(i = 0; i < NOTAS; i++) {

        printf("\nAluno %d\n", i + 1);

        printf("RA: ");
        scanf("%8s", registro_academico[i]);

        printf("Nota 1: ");
        scanf("%d", &nota_1[i]);

        printf("Nota 2: ");
        scanf("%d", &nota_2[i]);

        if((nota_1[i] + nota_2[i]) < 140) {

            printf("Nota Exame: ");
            scanf("%d", &nota_exame[i]);

            media[i] = (nota_1[i] + nota_2[i] + nota_exame[i]) / 3.0;

        } else {

            nota_exame[i] = -1;
            media[i] = (nota_1[i] + nota_2[i]) / 2.0;
        }


        if(media[i] >= 70)
            situacao[i] = 'A';
        else
            situacao[i] = 'R';
    }

    printf("\n\n===== RELATORIO =====\n");

    for(i = 0; i < NOTAS; i++) {

        printf("\nRA: %s", registro_academico[i]);

        printf("\nN1: %d", nota_1[i]);
        printf("\nN2: %d", nota_2[i]);

        if(nota_exame[i] != -1)
            printf("\nExame: %d", nota_exame[i]);
        else
            printf("\nExame: NAO REALIZADO");

        printf("\nMedia: %.2f", media[i]);

        if(situacao[i] == 'A')
            printf("\nSituacao: APROVADO\n");
        else
            printf("\nSituacao: REPROVADO\n");
    }

    return 0;
}
