#include <stdio.h>
// Subroutine: returns the smallest element of the array
int smallestElement(int v[], int n) {
    int smallest = v[0];
    int i;
    for (i = 1; i < n; i++) {
        if (v[i] < smallest) {
            smallest = v[i];
        }
    }
    return smallest;
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
    printf("Smallest element = %d\n", smallestElement(v, n));
    return 0;
}
