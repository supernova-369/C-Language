#include <stdio.h>

unsigned long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

     // Handle negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }
    
    printf("Factorial of %d = %lu\n", n, factorial(n));
    
    return 0;
}