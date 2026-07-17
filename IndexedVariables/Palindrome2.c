#include <stdio.h>
int main() {
    int SizeOfArray, elements, Frequency;
    printf("Enter the size of the array: ");
    scanf("%d", &SizeOfArray);
    int v[SizeOfArray], used[SizeOfArray];
    // Initialize control array
    for(elements = 0; elements < SizeOfArray; elements++) {
        used[elements] = 0;
    }
    // Reading the array
    printf("Enter the elements of the array:\n");
    for(elements = 0; elements < SizeOfArray; elements++) {
        scanf("%d", &v[elements]);
    }
    // Frequency without repetition
    printf("\nNumber - Frequency\n");
    for(elements = 0; elements < SizeOfArray; elements++) {
        if(used[elements] == 1)
            continue;
        int freq = 1;
        for(Frequency = elements + 1; Frequency < SizeOfArray; Frequency++) {
            if(v[elements] == v[Frequency]) {
                freq++;
                used[Frequency] = 1; // mark as already counted
            }
        }
        printf("%d - %d\n", v[elements], freq);
    }
    return 0;
}
