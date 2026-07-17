#include <stdio.h>
// Subroutine: checks if it is a palindrome
int isPalindrome(int integer) {
    int original = integer;
    int reversed = 0;
    while (integer > 0) {
        reversed = reversed * 10 + (integer % 10);
        integer = integer / 10;
    }
    if (original == reversed)
        return 1;
    else
        return 0;
}
int main() {
    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);
    if (isPalindrome(integer)) {
        printf("%d is a palindrome\n", integer);
    } else {
        printf("%d is not a palindrome\n", integer);
    }
    return 0;
}
