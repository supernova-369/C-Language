#include <stdio.h>

void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int z = 1;

    printf("---VALUES BEFORE SWAPPING---\nx = %d z = %d\n",x,z);

    int *px = &x;
    int *pz = &z;

    swap(&px, &pz);
    
    printf("---VALUES AFTER SWAPPING---\nx = %d z = %d",*px,*pz);
    return 0;
}
