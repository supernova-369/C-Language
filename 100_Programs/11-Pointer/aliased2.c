#include <stdio.h>

int main(void)
{
    int x = 10;

    int *p = &x;
    int *q = &x;   // p and q alias the same memory

    *p = 20;

    printf("x  = %d\n", x);
    printf("*q = %d\n", *q);

    return 0;
}
