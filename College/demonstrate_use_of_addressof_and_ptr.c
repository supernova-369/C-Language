#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    // Address-of operator
    p = &a;

    printf("Value of a: %d\n", a);

    // Using & operator
    printf("Address of a using &: %p\n", &a);

    // Pointer storing address
    printf("Value stored in pointer p (address of a): %p\n", p);

    // Using * operator (dereferencing)
    printf("Value of a using pointer (*p): %d\n", *p);

    return 0;
}