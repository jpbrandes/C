// The fibonacci sequence is about the two preceding numbers being added together.
// A

#include <stdio.h>

int main()
{
    int number_of_terms, terms_in_loop;
    // Initialize the first two terms of the sequence
    int current = 0, next = 1, next_term; 
    int sum = 0; // accumulator

    printf("Type the number of terms you want to see: "); // Here is about how many terms you want to see.
    scanf("%d", &number_of_terms);

    printf("Fibonacci Sequence: ");

    for (terms_in_loop = 1; terms_in_loop <= number_of_terms; terms_in_loop++) {
        // 1. Print the current term
        printf("%d ", current);
       
        // 2. Add the current term to the total sum
        sum += current; // Or sum = sum + current

        // 3. Calculate the next term and shift the variables forward
        next_term = current + next;
        current = next;
        next = next_term;
    }

    // Print the final sum
    printf("\nSum of all generated terms: %d\n", sum);

    return 0;
}