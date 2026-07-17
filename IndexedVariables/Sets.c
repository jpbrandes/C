#include <stdio.h>
int main() {
    int vectorA[100], vectorB[100];
    int numbers;
    // Reading set A
    printf("Enter the 100 numbers for set A:\n");
    for(numbers = 0; numbers < 100; numbers++) {
        scanf("%d", &vectorA[numbers]);
    }
    // Generating set B
    for(numbers = 0; numbers < 100; numbers++) {
        if(vectorA[numbers] % 2 == 0) {
            vectorB[numbers] = vectorA[numbers] * 5; // If even
        } else {
            vectorB[numbers] = vectorA[numbers] + 5; // If odd
        }
    }
    // Displaying set B
    printf("\nSet B:\n");
    for(numbers = 0; numbers < 100; numbers++) {
        printf("B[%d] = %d\n", numbers, vectorB[numbers]);
    }
    return 0;
}
