#include <stdio.h>


int recursiveSequentialSearch(const int array[], int size, int targetValue, int currentIndex) {
    if (currentIndex >= size) {
        return -1; // This if means that will return -1 if the number isnt found.
    }

    if (array[currentIndex] == targetValue) {
        return currentIndex; // This is what we want, if number is found, will return current index value.
    }

    return recursiveSequentialSearch(array, size, targetValue, currentIndex + 1); // This is all the variable necessary for the recursivity.
}

int main(void) {
    int numbers[] = {12, 45, 7, 23, 89, 34};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int targetValue = 23;

    int foundIndex = recursiveSequentialSearch(numbers, arraySize, targetValue, 0); // Function called to solve problem in main.

    if (foundIndex != -1) {
        printf("Value %d found at index %d.\n", targetValue, foundIndex);
    } else {
        printf("Value %d was not found in the array.\n", targetValue);
    }

    return 0;
}