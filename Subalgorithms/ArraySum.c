#include <stdio.h>
// Subroutine: sum of the array elements
int sumArray(int v[], int elementN) {
    int sum = 0;
    int progressionNumber;
    for (progressionNumber = 0; progressionNumber < elementN; progressionNumber++) {
        sum += v[progressionNumber];
    }
    return sum;
}
int main() {
    int elementN, progressionNumber;
    printf("Enter the size of the array: ");
    scanf("%d", &elementN);
    int v[elementN];
    printf("Enter the elements of the array:\n");
    for (progressionNumber = 0; progressionNumber < elementN; progressionNumber++) {
        scanf("%d", &v[progressionNumber]);
    }
    printf("Sum of elements = %d\n", sumArray(v, elementN));
    return 0;
}
