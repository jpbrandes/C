#include <stdio.h>
int main() {
    int VectorA[50], VectorB[50];
    float VectorC[50];
    int quantityOfTerms;
    // Reading set A
    printf("Enter the 50 numbers for set A:\n");
    for(quantityOfTerms = 0; quantityOfTerms < 50; quantityOfTerms++) {
        scanf("%d", &VectorA[quantityOfTerms]);
    }
    // Reading set B
    printf("Enter the 50 numbers for set B:\n");
    for(quantityOfTerms = 0; quantityOfTerms < 50; quantityOfTerms++) {
        scanf("%d", &VectorB[quantityOfTerms]);
    }
    // Calculates the average between the elements of A and B
    for(quantityOfTerms = 0; quantityOfTerms < 50; quantityOfTerms++) {
        VectorC[quantityOfTerms] = (VectorA[quantityOfTerms] + VectorB[quantityOfTerms]) / 2.0;
    }
    // Displays set C
    printf("\nSet C (averages):\n");
    for(quantityOfTerms = 0; quantityOfTerms < 50; quantityOfTerms++) {
        printf("C[%d] = %.2f\n", quantityOfTerms, VectorC[quantityOfTerms]);
    }
    return 0; // The secret is the for loop.
}
