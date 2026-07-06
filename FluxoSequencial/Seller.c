#include <stdio.h>
int main() {
    char name[50];
    float salary, sales, commission, total;
    printf("Enter the salesperson's name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the salesperson's fixed salary: ");
    scanf("%f", &salary);
    printf("Enter the total sales made by the salesperson: ");
    scanf("%f", &sales);
    commission = sales * 0.12; // Assuming the commission is 12% of sales
    total = salary + commission;
    printf("The total amount to be received by salesperson %s is: R$ %.2f\n", name, total);
    return 0;
}
