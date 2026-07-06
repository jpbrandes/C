#include <stdio.h>
int main() {
    double numbers[80]; // Array declaration to store 80 numbers
    int i;
    for(i = 0; i < 80; i++) {
        printf("Enter eighty numbers %d: ", i + 1);
        scanf("%lf", &numbers[i]); // Reads the numbers and stores them in the array
        if(numbers[i] > 10 && numbers[i] < 150) {
            printf("The number %.2lf is between 10 and 150.\n", numbers[i]);
        } else {
            printf("The number %.2lf is not between 10 and 150.\n", numbers[i]);
        }
    }
    printf("The numbers that belong to the range between 10 and 150 are:\n");
    for(i = 0; i < 80; i++) {
        if(numbers[i] > 10 && numbers[i] < 150) {
            printf("%.2lf / ", numbers[i]);
        }
    }
    printf("\n");
}
