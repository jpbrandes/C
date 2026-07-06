#include <stdio.h>
// Subroutine: sum of cubes from 1 to n
int sumOfCubes(int n) {
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of cubes from 1 to %d = %d\n", n, sumOfCubes(n));
    return 0;
}
