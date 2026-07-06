#include <stdio.h>
int main() {
    double reais, dollar, exchangeRate, dollarQuantity;
    printf("Enter the value in reais: ");
    scanf("%lf", &reais);
    printf("Enter the dollar exchange rate: ");
    scanf("%lf", &exchangeRate);
    dollar = reais / exchangeRate;
    dollarQuantity = reais * exchangeRate;
    printf("The value in dollars is: %.2lf\n", dollar);
    printf("The quantity of dollars is: %.2lf\n", dollarQuantity);
    return 0;
}
