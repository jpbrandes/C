#include <stdio.h>
int main() {
    int n, i;
    float number;
    printf("Enter the quantity of numbers (N): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
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
