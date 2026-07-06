#include <stdio.h>
int main() {
    double weight, height, bmi;
    printf("Enter the weight (in kg): ");
    scanf("%lf", &weight);
    printf("Enter the height (in meters): ");
    scanf("%lf", &height);
    bmi = weight / (height * height);
    printf("The Body Mass Index (BMI) is: %.2lf\n", bmi);
    return 0;
}
