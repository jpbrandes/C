#include <stdio.h>
int main() {
    int VectorA[20], VectorB[20];
    int numbers, temp;
    // Reading set A
    printf("Enter the 20 numbers for set A:\n");
    for(numbers = 0; numbers < 20; numbers++) {
        scanf("%d", &VectorA[numbers]);
    }
    // Reading set B
    printf("Enter the 20 numbers for set B:\n");
    for(numbers = 0; numbers < 20; numbers++) {
        scanf("%d", &VectorB[numbers]);
    }
    // Swapping values between A and B
    for(numbers = 0; numbers < 20; numbers++) {
        temp = VectorA[numbers];
        VectorA[numbers] = VectorB[numbers];
        VectorB[numbers] = temp;
    }
    // Displays the new set A
    printf("\nNew set A:\n");
    for(numbers = 0; numbers < 20; numbers++) {
        printf("A[%d] = %d\n", numbers, VectorA[numbers]);
    }
    // Displays the new set B
    printf("\nNew set B:\n");
    for(numbers = 0; numbers < 20; numbers++) {
        printf("B[%d] = %d\n", numbers, VectorB[numbers]);
    }
    return 0;
}
