#include <stdio.h>
int main() {
    int quantity[100];
    float price[100];
    float totalRevenue = 0;
    int soldItems;
    // Reading the quantities sold
    printf("Enter the quantity sold of each item:\n");
    for(soldItems = 0; soldItems < 100; soldItems++) {
        printf("Item %d: ", soldItems + 1);
        scanf("%d", &quantity[soldItems]);
    }
    // Reading the prices of the items
    printf("\nEnter the price of each item:\n");
    for(soldItems = 0; soldItems < 100; soldItems++) {
        printf("Price of item %d: ", soldItems + 1);
        scanf("%f", &price[soldItems]);
    }
    // Calculating the total revenue
    for(soldItems = 0; soldItems < 100; soldItems++) {
        totalRevenue += quantity[soldItems] * price[soldItems];
    }
    // Displays the monthly revenue
    printf("\nMonthly revenue of the warehouse: R$ %.2f\n", totalRevenue);
    return 0;
}
