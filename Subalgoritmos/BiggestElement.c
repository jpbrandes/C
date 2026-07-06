#include <stdio.h>
// Subroutine: returns the largest element of the array
int largestElement(int v[], int n) {
    int largest = v[0];
    int i;
    for (i = 1; i < n; i++) {
        if (v[i] > largest) {
            largest = v[i];
        }
    }
    return largest;
}
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int v[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Largest element = %d\n", largestElement(v, n));
    return 0;
}
