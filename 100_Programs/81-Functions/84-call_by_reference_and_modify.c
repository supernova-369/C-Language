#include <stdio.h>

// Function to modify values
void modify(int *a, int *b)
{
    *a = *a + 10;

    *b = *b + 20;
}

int main()
{
    int x = 5;
    int y = 10;

    printf("Before modification\n");

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Pass addresses
    modify(&x, &y);

    printf("\nAfter modification\n");

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}