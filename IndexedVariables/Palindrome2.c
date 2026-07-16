#include <stdio.h>
int main() {
    int N, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int v[N], used[N];
    // Initialize control array
    for(i = 0; i < N; i++) {
        used[i] = 0;
    }
    // Reading the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }
    // Frequency without repetition
    printf("\nNumber - Frequency\n");
    for(i = 0; i < N; i++) {
        if(used[i] == 1)
            continue;
        int freq = 1;
        for(j = i + 1; j < N; j++) {
            if(v[i] == v[j]) {
                freq++;
                used[j] = 1; // mark as already counted
            }
        }
        printf("%d - %d\n", v[i], freq);
    }
    return 0;
}
