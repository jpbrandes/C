#include <stdio.h>
int main() {
    int VectorA[30], VectorB[30];
    int Elements;
    // Reading set A
    printf("Enter the 30 numbers for set A:\n");
    for(Elements = 0; Elements < 30; Elements++) {
        scanf("%d", &VectorA[Elements]);
    }
    // Multiplies the elements of A by 3 and stores them in B
    for(Elements = 0; Elements < 30; Elements++) {
        VectorB[Elements] = VectorA[Elements] * 3;
    }
    // Displays set B
    printf("\nSet B:\n");
    for(Elements = 0; Elements < 30; Elements++) {
        printf("B[%d] = %d\n", Elements, VectorB[Elements]);
    }
    return 0;
}
