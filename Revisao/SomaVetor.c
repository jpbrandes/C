#include <stdio.h>

int main() {
    int size = 5; // Represent the size of a vector.
    int arr[5] = {10, 20, 30, 40, 50}; // A predefined vector.
    int sum = 0; // Inicialized with 0 (not change result).
    int i; // For loop
    float average; // The media of the vector terms.

    // Calculate sum
    for (i = 0; i < size; i++) {
        sum += arr[i]; // sum = sum + arr[i] - Sum inicialized with 0 (not change result).
    }

    // Calculate average using type casting
    average = (float)sum / size;

    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}

// = is different than ==. The first one is about atribution, the second one is about equality.