#include <stdio.h>
int main() {
    double purchaseValue, saleValue, installment, numInstallments = 5;
    printf("Enter the product's purchase value: ");
    scanf("%lf", &purchaseValue);
    saleValue = purchaseValue + (purchaseValue * 0.45);
    printf("The product's sale value is: %.2lf\n", saleValue);
    installment = saleValue / numInstallments;
    printf("The value of each installment is: %.2lf\n", installment);
    return 0;
}
