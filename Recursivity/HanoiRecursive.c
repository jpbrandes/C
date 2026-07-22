#include <stdio.h>

void TowerOfHanoi(int numberOfDisks, char from_rod, char to_rod, char auxiliary_rod){
    if(numberOfDisks == 1){
        printf("\n Move disk 1 from rod %c to rod %c.", from_rod, to_rod);
        return;
    }

    TowerOfHanoi(numberOfDisks - 1, from_rod, auxiliary_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c.", numberOfDisks, from_rod, to_rod);
    TowerOfHanoi(numberOfDisks - 1, auxiliary_rod, to_rod, from_rod); // Funcion of hanoi tower.
}

int main()
{

    int NumberOfDisks;

    printf("Type a number of disks desired: ");
    scanf("%d", &NumberOfDisks);

    TowerOfHanoi(NumberOfDisks, 'A','B','C'); // Function called, each disk is called A,B and C.
    return 0;

}
