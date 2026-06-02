#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Address of x  : %p\n", (void *)&x);
    printf("Value of p    : %p\n", (void *)p);

    return 0;
}
