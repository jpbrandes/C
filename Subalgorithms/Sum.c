#include <stdio.h>
// Subroutine: sum from 0 to N
int sumToN(int n) {
    int sum = 0;
    int i;
    for (i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    result = sumToN(n);
    printf("Sum from 0 to %d = %d\n", n, result);
    return 0;
}
