#include <stdio.h>
int main() {
    int A[50], B[50];
    float C[50];
    int i;
    // Reading set A
    printf("Enter the 50 numbers for set A:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &A[i]);
    }
    // Reading set B
    printf("Enter the 50 numbers for set B:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &B[i]);
    }
    // Calculates the average between the elements of A and B
    for(i = 0; i < 50; i++) {
        C[i] = (A[i] + B[i]) / 2.0;
    }
    // Displays set C
    printf("\nSet C (averages):\n");
    for(i = 0; i < 50; i++) {
        printf("C[%d] = %.2f\n", i, C[i]);
    }
    return 0; // The secret is the for loop.
}
