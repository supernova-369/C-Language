#include <stdio.h>

void bad(int *a, int *b)
{
    *a = 10;
    *b = 20;
}

int main(void)
{
    int x = 0;
    bad(&x, &x);  // aliasing

    printf("%d\n", x);
    return 0;
}
