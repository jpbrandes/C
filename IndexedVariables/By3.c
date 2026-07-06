#include <stdio.h>
int main() {
    int A[30], B[30];
    int i;
    // Reading set A
    printf("Enter the 30 numbers for set A:\n");
    for(i = 0; i < 30; i++) {
        scanf("%d", &A[i]);
    }
    // Multiplies the elements of A by 3 and stores them in B
    for(i = 0; i < 30; i++) {
        B[i] = A[i] * 3;
    }
    // Displays set B
    printf("\nSet B:\n");
    for(i = 0; i < 30; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }
    return 0;
}
