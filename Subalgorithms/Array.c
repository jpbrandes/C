#include <stdio.h>
// Subroutine: returns the smallest element of the array
int smallestElement(int vector[], int number) {
    int smallest = vector[0];
    int elementProgression;
    for (elementProgression = 1; elementProgression < number; elementProgression++) {
        if (vector[elementProgression] < smallest) {
            smallest = vector[elementProgression];
        }
    }
    return smallest;
}
int main() {
    int number, elementProgression;
    printf("Enter the size of the array: ");
    scanf("%d", &number);
    int vector[number];
    printf("Enter the elements of the array:\n");
    for (elementProgression = 0; elementProgression < number; elementProgression++) {
        scanf("%d", &vector[elementProgression]);
    }
    printf("Smallest element = %d\n", smallestElement(vector, number));
    return 0;
}
