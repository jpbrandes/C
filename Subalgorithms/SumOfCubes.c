#include <stdio.h>
// Subroutine: sum of cubes from 1 to n
int sumOfCubes(int number) {
    int sum = 0;
    int NumberProgression;
    for (NumberProgression = 1; NumberProgression <= number; NumberProgression++) {
        sum += NumberProgression * NumberProgression * NumberProgression;
    }
    return sum;
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Sum of cubes from 1 to %d = %d\n", number, sumOfCubes(number));
    return 0;
}
