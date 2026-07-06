#include <stdio.h>
int main() {
    int MAT[4][5];
    int ROWSUM[4];
    int i, j;
    int TOTAL = 0;
    // Reading the 4x5 matrix
    printf("Enter the elements of the 4x5 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    // Sum of each row
    for(i = 0; i < 4; i++) {
        ROWSUM[i] = 0;
        for(j = 0; j < 5; j++) {
            ROWSUM[i] += MAT[i][j];
        }
    }
    // Sum of the ROWSUM array
    for(i = 0; i < 4; i++) {
        TOTAL += ROWSUM[i];
    }
    // Printing the final result
    printf("\nTOTAL = %d\n", TOTAL);
    return 0;
}
