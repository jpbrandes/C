#include <stdio.h>

int main() {
    int N, i;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int v[N];

    // Reading the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int highestPos = 0;
    int lowestPos = 0;

    // Finds the highest and lowest position
    for(i = 1; i < N; i++) {
        if(v[i] > v[highestPos]) {
            highestPos = i;
        }
        if(v[i] < v[lowestPos]) {
            lowestPos = i;
        }
    }

    printf("\nPosition of the highest element: %d (value = %d)\n", highestPos, v[highestPos]);
    printf("Position of the lowest element: %d (value = %d)\n", lowestPos, v[lowestPos]);

    return 0;
}
