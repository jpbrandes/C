#include <stdio.h>

int main() {
    int vector[10];
    int elements;
    int firstTerm;

    // Reading the array
    printf("Enter the 10 elements of the array:\n");
    for(elements = 0; elements < 10; elements++) {
        scanf("%d", &vector[elements]);
    }

    // Stores the first element
    firstTerm = vector[0];

    // Left rotation
    for(elements = 0; elements < 9; elements++) {
        vector[elements] = vector[elements + 1];
    }

    // Places the first element at the end
    vector[9] = firstTerm;

    // Printing the rotated array
    printf("\nRotated array:\n");
    for(elements = 0; elements < 10; elements++) {
        printf("%d ", vector[elements]);
    }

    printf("\n");

    return 0;
}
