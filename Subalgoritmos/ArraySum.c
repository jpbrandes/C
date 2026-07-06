#include <stdio.h>
// Subroutine: sum of the array elements
int sumArray(int v[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += v[i];
    }
    return sum;
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
    printf("Sum of elements = %d\n", sumArray(v, n));
    return 0;
}
