#include <stdio.h>  // Include the standard input/output header file.

int main() {
    int linhas, i, j; // Default variable declaration for rows and for loops.

    printf("Digite a quantidade de linhas que voce quer: "); // In that line, user will tell how many lines of the piramid he wants.
    scanf("%d", &linhas);

    for(i = 1; i <= linhas; i++){ // First loop counts the rows

        for(j = 1; j <= i; j++){ // Second loop makes the asterisk combine with the respective row.
            printf("*");
        }

    printf("\n");

    }

    return 0;
}
