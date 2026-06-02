#include <stdio.h>

int main(void)
{
    int myary[20];
    int *myaryPtr = myary;

    printf("sizeof(myary)     = %zu bytes\n", sizeof(myary));
    //%zu is part of a larger set of format specifiers in C
    printf("sizeof(myaryPtr)  = %zu bytes\n", sizeof(myaryPtr));
    printf("Number of elements = %zu\n", sizeof(myary) / sizeof(myary[0]));

    return 0;
}
//%X: Unsigned hexadecimal integer (unsigned int) 