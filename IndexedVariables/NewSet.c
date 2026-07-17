#include <stdio.h>
int main() {
    int VectorA[15], VectorB[15], VectorC[30];
    int Elements;
    // Reading set A
    printf("Enter the 15 numbers for set A:\n");
    for(Elements = 0; Elements < 15; Elements++) {
        scanf("%d", &VectorA[Elements]);
    }
    // Reading set B
    printf("Enter the 15 numbers for set B:\n");
    for(Elements = 0; Elements < 15; Elements++) {
        scanf("%d", &VectorB[Elements]);
    }
    // Copies the elements of A to C
    for(Elements = 0; Elements < 15; Elements++) {
        VectorC[Elements] = VectorA[Elements];
    }
    // Copies the elements of B to C
    for(Elements = 0; Elements < 15; Elements++) {
        VectorC[Elements + 15] = VectorB[Elements];
    }
    // Displays set C
    printf("\nSet C:\n");
    for(Elements = 0; Elements < 30; Elements++) {
        printf("C[%d] = %d\n", Elements, VectorC[Elements]);
    }
    return 0;
}
