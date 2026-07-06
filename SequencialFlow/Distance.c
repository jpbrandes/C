#include <stdio.h>

int main(){
    double time, speed, displacement, averageSpeed;

    printf("Enter the time spent (in hours): ");
    scanf("%lf", &time);

    printf("Enter the speed (in km/h): ");
    scanf("%lf", &speed);
    displacement = speed * time;
    averageSpeed = displacement / time;

    printf("The displacement traveled is: %.2lf km\n", displacement);
    printf("The average speed is: %.2lf km/h\n", averageSpeed);

    return 0;
}
