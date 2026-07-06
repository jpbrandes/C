#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"English");
    int i, n;
    printf("Enter the value N: ");
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++) {
        printf("Enter the value for position %d: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < n; i++){
        if(v[i] < 0) {
            printf("The number %d is less than zero.\n", v[i]);
        }
        else if (v[i] > 0) {
            printf("The number %d is greater than zero.\n", v[i]);
        }
        else {
            printf("The number %d is equal to zero.\n", v[i]);
        }
    }
    return 0;
}
