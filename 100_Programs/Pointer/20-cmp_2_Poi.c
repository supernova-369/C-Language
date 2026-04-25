#include <stdio.h>

int main()
{
    int a, b;
    int *x = &a, *z = &b;

    printf("Enter the value for a : ");
    scanf("%d", &a);

    printf("Enter the value for b : ");
    scanf("%d", &b);

    if (a == b)
    {
        z = x;   // NOW both pointers point to same address

        if (x == z)
            printf("WOW! You have come so far!");
        else
            printf("Dammnn!");
    }
    else
    {
        printf("Dammnn!");
    }

    return 0;
}
