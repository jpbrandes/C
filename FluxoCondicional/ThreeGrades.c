#include <stdio.h>
int main() {
    double grade1, grade2, grade3, average;
    printf("Enter the first grade: ");
    scanf("%lf", &grade1);
    printf("Enter the second grade: ");
    scanf("%lf", &grade2);
    printf("Enter the third grade: ");
    scanf("%lf", &grade3);
    average = (grade1 + grade2 + grade3) / 3;
    printf("The average of the three grades is: %.2lf\n", average);
    if (average >= 7.0) {
        printf("Passed!\n");
    } else if (average >= 5.0) {
        printf("Recovery!\n");
    } else {
        printf("Failed!\n");
    }
    return 0;
}
