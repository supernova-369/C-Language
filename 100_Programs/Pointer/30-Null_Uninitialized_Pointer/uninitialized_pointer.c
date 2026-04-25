#include <stdio.h>

int main(void)
{
    int *p;

    printf("%p\n", (void *)p);  // Undefined behavior
    *p = 10;                    // Undefined behavior

    return 0;
}
