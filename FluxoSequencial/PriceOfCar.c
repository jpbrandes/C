#include <stdio.h>
int main(){
    double carCost, taxValue, finalValue;
    printf("Enter the car's cost: ");
    scanf("%lf", &carCost);
    printf("Enter the tax value (in percentage): ");
    scanf("%lf", &taxValue);
    taxValue = carCost * taxValue / 100; // Converting the percentage to decimal
    finalValue = carCost + taxValue;
    printf("The tax value is: R$ %.2lf\n", taxValue);
    printf("The final value of the car is: R$ %.2lf\n", finalValue);
    return 0;
}
