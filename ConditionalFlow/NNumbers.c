#include <stdio.h>
int main() {
    int NumberN, loopCounter;
    float number;
    printf("Enter the quantity of numbers (N): ");
    scanf("%d", &NumberN);
    for (loopCounter = 1; loopCounter <= NumberN; loopCounter++) {
        printf("Enter number %d: ", loopCounter);
        scanf("%f", &number);
        if (number > 0) {
            printf("Result: Positive\n\n");
        } else if (number < 0) {
            printf("Result: Negative\n\n");
        } else {
            printf("Result: Zero\n\n");
        }
    }
    return 0;
}
