#include <stdio.h>
int main() {
    double productCost, saleValue, profit, loss, average;
    char productQuantity[40];
    for(int i = 1; i <= 40; i++) {
        printf("Enter the cost of product %d: ", i);
        scanf("%lf", &productCost);
        saleValue = productCost + (productCost * 0.45);
        profit = saleValue - productCost;
        loss = productCost - saleValue;
        printf("The sale value of product %d is: %.2lf\n", i, saleValue);
        printf("The profit of product %d is: %.2lf\n", i, profit);
        printf("The loss of product %d is: %.2lf\n", i, loss);
        printf("------------------------------\n");
    }
} // The secret is learning to automate the process, that is, putting everything inside the for loop so it can read the data for 40 products, and inside the for loop placing the conditions to calculate the sale value, profit, and loss of each product.
