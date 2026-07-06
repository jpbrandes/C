#include <stdio.h>

int main() {
    int v[10];
    int i;
    int first;

    // Reading the array
    printf("Enter the 10 elements of the array:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Stores the first element
    first = v[0];

    // Left rotation
    for(i = 0; i < 9; i++) {
        v[i] = v[i + 1];
    }

    // Places the first element at the end
    v[9] = first;

    // Printing the rotated array
    printf("\nRotated array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}
