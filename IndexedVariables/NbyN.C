#include <stdio.h>
int main() {
    int dimensionN, lines, colunes;
    printf("Enter the dimension N of the square matrix: ");
    scanf("%d", &dimensionN);
    int MAT[dimensionN][dimensionN];
    // Reading the matrix
    printf("Enter the elements of the %dx%d matrix:\n", dimensionN, dimensionN);
    for(lines = 0; lines < dimensionN; lines++) {
        for(colunes = 0; colunes < dimensionN; colunes++) {
            scanf("%d", &MAT[lines][colunes]);
        }
    }
    printf("\nElements above the main diagonal:\n");
    for(lines = 0; lines < dimensionN; lines++) {
        for(colunes = lines + 1; colunes < dimensionN; colunes++) {
            printf("%d ", MAT[lines][colunes]);
        }
    }
    printf("\n\nElements below the main diagonal:\n");
    for(lines = 1; lines < dimensionN; lines++) {
        for(colunes = 0; colunes < lines; colunes++) {
            printf("%d ", MAT[lines][colunes]);
        }
    }
    printf("\n");
    return 0;
}
