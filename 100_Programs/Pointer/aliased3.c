#include <stdio.h>

void update(int *a, int *b)
{
    *a = *a + 10;
    *b = *b + 20;
}

int main(void)
{
    int x = 5;

    update(&x, &x);   // both parameters alias the same variable

    printf("x = %d\n", x);

    return 0;
}
