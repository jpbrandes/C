#include <stdio.h>
int main() {
    float Matrix[20][20];
    int lines, colunes;
    // Reading the 20x20 matrix
    printf("Enter the elements of the 20x20 matrix:\n");
    for(lines = 0; lines < 20; lines++) {
        for(colunes = 0; colunes < 20; colunes++) {
            scanf("%f", &Matrix[lines][colunes]);
        }
    }
    // Modifying the matrix
    for(lines = 0; lines < 20; lines++) {
        float diag = Matrix[lines][lines];
        // Avoids division by zero
        if(diag == 0) {
            printf("Zero diagonal on row %d. Division cannot be performed.\n", lines);
            continue;
        }
        for(colunes = 0; colunes < 20; colunes++) {
            Matrix[lines][colunes] = Matrix[lines][colunes] / diag;
        }
    }
    // Printing the modified matrix
    printf("\nModified matrix:\n");
    for(lines = 0; lines < 20; lines++) {
        for(colunes = 0; colunes < 20; colunes++) {
            printf("%.2f ", Matrix[lines][colunes]);
        }
        printf("\n");
    }
    return 0;
}
