#include <stdio.h>
#include <locale.h>
int main(void)
{
  setlocale(LC_ALL,"English");
  float grades[5] = {7, 8, 9.5, 9.9, 5.2};
  // declaring and initializing the grades array, each position of the array has its respective grade.
  printf("Displaying the Array Values \n\n");
  printf("grades[0] = %.1f\n", grades[0]);
  printf("grades[1] = %.1f\n", grades[1]);
  printf("grades[2] = %.1f\n", grades[2]);
  printf("grades[3] = %.1f\n", grades[3]);
  printf("grades[4] = %.1f\n", grades[4]);
  return 0;
}
