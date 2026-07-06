#include <stdio.h>
int main() {
    double productCost, saleValue, increase;
    printf("Enter the product's cost: ");
    scanf("%lf", &productCost);
    
    printf("Enter the increase value (in percentage): ");
    scanf("%lf", &increase);
    saleValue = productCost + (productCost * (increase / 100));
    printf("The product's sale value is: %.2lf\n", saleValue);
    return 0;
}
