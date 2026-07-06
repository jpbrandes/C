#include <stdio.h>
int main() {
    int A[20], B[20];
    int i, temp;
    // Reading set A
    printf("Enter the 20 numbers for set A:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &A[i]);
    }
    // Reading set B
    printf("Enter the 20 numbers for set B:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &B[i]);
    }
    // Swapping values between A and B
    for(i = 0; i < 20; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    // Displays the new set A
    printf("\nNew set A:\n");
    for(i = 0; i < 20; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }
    // Displays the new set B
    printf("\nNew set B:\n");
    for(i = 0; i < 20; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }
    return 0;
}
