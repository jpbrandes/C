#include <stdio.h>

int main() {
    // 1. Imprime o cabeçalho das colunas (numeração de 1 a 10)
    // Deixamos 4 espaços antes da barra para alinhar com a linha separadora
    printf("    |");
    for (int j = 1; j <= 10; j++) {
        printf("%5d", j);
    }
    printf("\n");

    // 2. Imprime a linha separadora (----+ seguido de 50 hifens, pois são 10 colunas de largura 5)
    printf("----+");
    for (int j = 0; j < 50; j++) {
        printf("-");
    }
    printf("\n");

    // 3. Imprime as linhas da tabuada usando dois laços for aninhados
    for (int i = 1; i <= 10; i++) {
        // Imprime o cabeçalho da linha atual (alinhado em 3 caracteres) e a barra
        printf("%3d |", i);
        
        // Laço interno que calcula e imprime os valores da linha
        for (int j = 1; j <= 10; j++) {
            printf("%5d", i * j);
        }
        printf("\n"); // Quebra de linha ao final de cada linha da tabela
    }

    return 0;
}
