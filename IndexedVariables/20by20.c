#include <stdio.h>
int main() {
    float M[20][20];
    int i, j;
    // Reading the 20x20 matrix
    printf("Enter the elements of the 20x20 matrix:\n");
    for(i = 0; i < 20; i++) {
        for(j = 0; j < 20; j++) {
            scanf("%f", &M[i][j]);
        }
    }
    // Modifying the matrix
    for(i = 0; i < 20; i++) {
        float diag = M[i][i];
        // Avoids division by zero
        if(diag == 0) {
            printf("Zero diagonal on row %d. Division cannot be performed.\n", i);
            continue;
        }
        for(j = 0; j < 20; j++) {
            M[i][j] = M[i][j] / diag;
        }
    }
    // Printing the modified matrix
    printf("\nModified matrix:\n");
    for(i = 0; i < 20; i++) {
        for(j = 0; j < 20; j++) {
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
