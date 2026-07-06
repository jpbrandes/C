#include <stdio.h>
void showEvens(int n) {
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Even numbers from 0 to %d:\n", n);
    showEvens(n);
    return 0;
}
