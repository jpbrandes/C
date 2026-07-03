#include <stdio.h>

int main() {
    float notas[20];
    float soma = 0.0, media = 0.0;
    float maior, menor;
    int acima_da_media = 0;

    // 1. Leitura das notas e acúmulo da soma
    printf("Digite as notas dos 20 alunos:\n");
    for (int i = 0; i < 20; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Acumulando para a média
    }

    // 2. Cálculo da média da turma
    media = soma / 20.0;

    // Inicializamos o maior e o menor com a primeira nota do vetor
    maior = notas[0];
    menor = notas[0];

    // 3. O ÚNICO PERCURSO para processar as estatísticas
    for (int i = 0; i < 20; i++) {
        // Verifica a maior nota
        if (notas[i] > maior) {
            maior = notas[i];
        }
        
        // Verifica a menor nota
        if (notas[i] < menor) {
            menor = notas[i];
        }

        // Verifica se a nota está acima da média da turma
        if (notas[i] > media) {
            acima_da_media++;
        }
    }

    // 4. Exibição dos resultados estatísticos
    printf("\n============= ESTATISTICAS =============");
    printf("\n1. Media da turma: %.2f", media);
    printf("\n2. Maior nota: %.2f | Menor nota: %.2f", maior, menor);
    printf("\n3. Alunos com nota acima da media: %d", acima_da_media);
    printf("\n========================================\n");

    return 0;
}
