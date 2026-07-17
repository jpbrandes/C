#include <stdio.h>
// Subroutine: returns the largest element of the array
int largestElement(int vector[], int sizeOfArray) {
    int largest = vector[0];
    int progressionNumber;
    for (progressionNumber = 1; progressionNumber < sizeOfArray; progressionNumber++) {
        if (vector[progressionNumber] > largest) {
            largest = vector[progressionNumber];
        }
    }
    return largest;
}
int main() {
    int sizeOfArray, progressionNumber;
    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfArray);
    int vector[sizeOfArray];
    printf("Enter the elements of the array:\n");
    for (progressionNumber = 0; progressionNumber < sizeOfArray; progressionNumber++) {
        scanf("%d", &vector[progressionNumber]);
    }
    printf("Largest element = %d\n", largestElement(vector, sizeOfArray));
    return 0;
}
