#include <stdio.h>
int main() {
    int A[15], B[15], C[30];
    int i;
    // Reading set A
    printf("Enter the 15 numbers for set A:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &A[i]);
    }
    // Reading set B
    printf("Enter the 15 numbers for set B:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &B[i]);
    }
    // Copies the elements of A to C
    for(i = 0; i < 15; i++) {
        C[i] = A[i];
    }
    // Copies the elements of B to C
    for(i = 0; i < 15; i++) {
        C[i + 15] = B[i];
    }
    // Displays set C
    printf("\nSet C:\n");
    for(i = 0; i < 30; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }
    return 0;
}
