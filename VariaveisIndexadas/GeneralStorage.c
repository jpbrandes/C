#include <stdio.h>
int main() {
    int quantity[100];
    float price[100];
    float totalRevenue = 0;
    int i;
    // Reading the quantities sold
    printf("Enter the quantity sold of each item:\n");
    for(i = 0; i < 100; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d", &quantity[i]);
    }
    // Reading the prices of the items
    printf("\nEnter the price of each item:\n");
    for(i = 0; i < 100; i++) {
        printf("Price of item %d: ", i + 1);
        scanf("%f", &price[i]);
    }
    // Calculating the total revenue
    for(i = 0; i < 100; i++) {
        totalRevenue += quantity[i] * price[i];
    }
    // Displays the monthly revenue
    printf("\nMonthly revenue of the warehouse: R$ %.2f\n", totalRevenue);
    return 0;
}
