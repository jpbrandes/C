#include <stdio.h>
#include <locale.h>
// Manipulanddo um vetor de N caracteres.

int main() {
    setlocale(LC_ALL,"Portuguese");
    int progressionLoop, termN, vector[termN];

    printf("Digite o valor de N: ");
    scanf("%d", &termN); // Ler N.

    for(progressionLoop = 0; progressionLoop <= termN-1; progressionLoop++) {
        printf("Informe o valor da posição %d: ", progressionLoop);
        scanf("%d", &vector[progressionLoop]);
    }

    for(progressionLoop = 0; progressionLoop<=termN-1; progressionLoop++){
        printf("v[%d] = %d\n", progressionLoop, vector[progressionLoop]);
    }
  return 0;
}
