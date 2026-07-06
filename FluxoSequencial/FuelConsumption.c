#include <stdio.h>
int main() {
    float distance, fuel, averageConsumption, totalSpent;
    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel consumed (in liters): ");
    scanf("%f", &fuel);
    if (fuel != 0) {
        averageConsumption = distance / fuel;
        printf("The vehicle's average consumption is: %.2f km/l\n", averageConsumption);
    } else {
        printf("The amount of fuel consumed cannot be zero.\n");
    }
    if (fuel = fuel) {
        totalSpent = fuel * 5.50; // Assuming the fuel price is R$ 5.50 per liter
        printf("The total spent on fuel is: R$ %.2f\n", totalSpent);
    }
    return 0;
}
