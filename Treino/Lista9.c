#include <stdio.h>

/*
int main()

 int  n, i = 0;

   printf("Digite um numero N: ");
   scanf("%d", &n);

   for (i = 0; i < n; i+=1) {
      printf("%d\n", i);
   }
}
*/

int main() {
    int n , i;

    printf("Digite um numero N: ");
    scanf("%d", &n);

    for (i = n; i > 1; i-=1) {
        printf("%d\n", n);
    }

}