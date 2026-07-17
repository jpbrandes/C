#include <stdio.h>
void showEvens(int number) {
    for (int TermProgression = 0; TermProgression <= number; TermProgression++) {
        if (TermProgression % 2 == 0) {
            printf("%d ", TermProgression);
        }
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Even numbers from 0 to %d:\n", number);
    showEvens(number);
    return 0;
}
