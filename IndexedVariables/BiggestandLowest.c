#include <stdio.h>

int main() {
    int NumberOfElements, Terms;

    printf("Enter the size of the array: ");
    scanf("%d", &NumberOfElements);

    int v[NumberOfElements];

    // Reading the array
    printf("Enter the elements of the array:\n");
    for(Terms = 0; Terms < NumberOfElements; Terms++) {
        scanf("%d", &v[Terms]);
    }

    int highestPos = 0;
    int lowestPos = 0;

    // Finds the highest and lowest position
    for(Terms = 1; Terms < NumberOfElements; Terms++) {
        if(v[Terms] > v[highestPos]) {
            highestPos = Terms;
        }
        if(v[Terms] < v[lowestPos]) {
            lowestPos = Terms;
        }
    }

    printf("\nPosition of the highest element: %d (value = %d)\n", highestPos, v[highestPos]);
    printf("Position of the lowest element: %d (value = %d)\n", lowestPos, v[lowestPos]);

    return 0;
}
