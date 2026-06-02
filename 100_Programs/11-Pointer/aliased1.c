//example 3
#include <stdio.h>

int main(void)
{
    int x = 5;

    int *p = &x;
    int *q = p;   // alias created by assignment

    *q = 99;

    printf("x = %d\n", x);

    return 0;
}
