#include <stdio.h>
int main() {
    double depositedValue, finalValue, interestRate = 0.70;
    printf("Enter the deposited value: ");
    scanf("%lf", &depositedValue);
    finalValue = depositedValue + (depositedValue * (interestRate / 100));
    printf("The final value after the deposit is: %.2lf\n", finalValue);
    return 0;
}
