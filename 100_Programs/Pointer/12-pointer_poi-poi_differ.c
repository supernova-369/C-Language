// #include <stdio.h>

// int main()
// {
//     int x = 10;
//     int *p = &x;   // p stores address of x

//     printf("x  = %d\n", x);     // 10
//     printf("*p = %d\n", *p);    // 10

//     *p = 20;   // modifies x
//     printf("x after change = %d\n", x); // 20

//     return 0;
// }


#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;   // pp stores address of p

    printf("x   = %d\n", x);      // 10
    printf("*p  = %d\n", *p);     // 10
    printf("**pp = %d\n", **pp);  // 10

    **pp = 30;  // modifies x
    printf("x after change = %d\n", x); // 30

    return 0;
}
