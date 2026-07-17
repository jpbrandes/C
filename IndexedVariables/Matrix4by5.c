#include <stdio.h>
int main() {
    int MAT[4][5];
    int ROWSUM[4];
    int lines, colunes;
    int TOTAL = 0;
    // Reading the 4x5 matrix
    printf("Enter the elements of the 4x5 matrix:\n");
    for(lines = 0; lines < 4; lines++) {
        for(colunes = 0; colunes < 5; colunes++) {
            scanf("%d", &MAT[lines][colunes]);
        }
    }
    // Sum of each row
    for(lines = 0; lines < 4; lines++) {
        ROWSUM[lines] = 0;
        for(colunes = 0; colunes < 5; colunes++) {
            ROWSUM[lines] += MAT[lines][colunes];
        }
    }
    // Sum of the ROWSUM array
    for(lines = 0; lines < 4; lines++) {
        TOTAL += ROWSUM[lines];
    }
    // Printing the final result
    printf("\nTOTAL = %d\n", TOTAL);
    return 0;
}
