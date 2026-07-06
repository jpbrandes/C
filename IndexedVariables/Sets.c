#include <stdio.h>
int main() {
    int A[100], B[100];
    int i;
    // Reading set A
    printf("Enter the 100 numbers for set A:\n");
    for(i = 0; i < 100; i++) {
        scanf("%d", &A[i]);
    }
    // Generating set B
    for(i = 0; i < 100; i++) {
        if(A[i] % 2 == 0) {
            B[i] = A[i] * 5; // If even
        } else {
            B[i] = A[i] + 5; // If odd
        }
    }
    // Displaying set B
    printf("\nSet B:\n");
    for(i = 0; i < 100; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }
    return 0;
}
