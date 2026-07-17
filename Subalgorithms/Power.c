#include <stdio.h>
// Subroutine to calculate X^N
double power(double base, int integer) {
    double result = 1.0;
    int elementProgression;
    for (elementProgression = 0; elementProgression < integer; elementProgression++) {
        result *= base;
    }
    return result;
}
int main() {
    double base, result;
    int integer;
    printf("Enter the value of X (real): ");
    scanf("%lf", &base);
    printf("Enter the value of N (integer): ");
    scanf("%d", &integer);
    result = power(base, integer);
    printf("%.2lf raised to the power of %d = %.2lf\n", base, integer, result);
    return 0;
}
