#include <stdio.h>

int main()
{
    int    a[3];
    char   b[3];
    double c[3];

    int    *p1 = a;
    char   *p2 = b;
    double *p3 = c;

    printf("int pointer     : %p -> %p\n", (void*)p1, (void*)(p1 + 1));
    printf("char pointer    : %p -> %p\n", (void*)p2, (void*)(p2 + 1));
    printf("double pointer  : %p -> %p\n", (void*)p3, (void*)(p3 + 1));

    return 0;
}
// 0 1 2 3 4 5 6 7 8 9 A B C D E F - hexadecimal

/*
p1 is a pointer → type: int *
*p1 is the value stored at that address → type: int
*/