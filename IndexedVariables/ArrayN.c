#include <stdio.h>
int main() {
    int sizeOfArray, elementsArray, Frequency;
    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfArray);
    int v[sizeOfArray], used[sizeOfArray];
    // Initialize control array
    for(elementsArray = 0; elementsArray < sizeOfArray; elementsArray++) {
        used[elementsArray] = 0;
    }
    // Reading the array
    printf("Enter the elements of the array:\n");
    for(elementsArray = 0; elementsArray < sizeOfArray; elementsArray++) {
        scanf("%d", &v[elementsArray]);
    }
    // Frequency without repetition
    printf("\nNumber - Frequency\n");
    for(elementsArray = 0; elementsArray < sizeOfArray; elementsArray++) {
        if(used[elementsArray] == 1)
            continue;
        int freq = 1;
        for(Frequency = elementsArray + 1; Frequency < sizeOfArray; Frequency++) {
            if(v[elementsArray] == v[Frequency]) {
                freq++;
                used[Frequency] = 1; // mark as already counted
            }
        }
        printf("%d - %d\n", v[elementsArray], freq);
    }
    return 0;
}
