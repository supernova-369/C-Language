#include <stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};

    int *p = &arr[0];
    int *q = arr;     // same as &arr[0]

    *p = 100;

    printf("arr[0] = %d\n", arr[0]);
    printf("*q     = %d\n", *q);

    return 0;
}
