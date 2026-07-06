#include <stdio.h>
// Subroutine to calculate X^N
double power(double x, int n) {
    double result = 1.0;
    int i;
    for (i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
int main() {
    double x, result;
    int n;
    printf("Enter the value of X (real): ");
    scanf("%lf", &x);
    printf("Enter the value of N (integer): ");
    scanf("%d", &n);
    result = power(x, n);
    printf("%.2lf raised to the power of %d = %.2lf\n", x, n, result);
    return 0;
}
