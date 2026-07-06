#include <stdio.h>
int main() {
    int N, i, j;
    printf("Enter the dimension N of the square matrix: ");
    scanf("%d", &N);
    int MAT[N][N];
    // Reading the matrix
    printf("Enter the elements of the %dx%d matrix:\n", N, N);
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    printf("\nElements above the main diagonal:\n");
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n\nElements below the main diagonal:\n");
    for(i = 1; i < N; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n");
    return 0;
}
