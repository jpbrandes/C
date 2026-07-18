#include <stdio.h>
#define LITTER_VALUE 6.00
int main()
{
    float distance_drived, liters_consumed, average_consumption, total_travel_cost;

    printf("Type the distance drived: ");
    scanf("%f", &distance_drived);
    printf("The distance drived is: %.2f.\n", distance_drived);

    do {
    printf("Type the liters consumed: ");
    scanf("%f", &liters_consumed);

    if (liters_consumed < 0) {
        printf("Invalid value. Please enter a value greater than or equal to 0.\n"); // This block will make the verification and will reset the question if liters are lowest than zero which is not possible.
    }

    } while (liters_consumed < 0);

    printf("Liters consumed: %.2f.\n", liters_consumed);

    average_consumption = distance_drived / liters_consumed;
    printf("The average consumption is: %.2f.\n", average_consumption);

    total_travel_cost = liters_consumed * LITTER_VALUE;
    printf("Total travel cost is: %.2f.\n", total_travel_cost);

    if(average_consumption >= 14){
        printf("This vehicle is economic.");
    } else if(14 >= average_consumption >= 12){
        printf("The vehicle is parcially economic.");
    } else (printf("Vehicle is not economic."));
    
    return 0;
}