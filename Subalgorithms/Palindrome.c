#include <stdio.h>
// Subroutine: checks if it is a palindrome
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }
    if (original == reversed)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }
    return 0;
}
