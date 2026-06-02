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

    printf("Enter the number to find the factorial of you (--'I guess he was week in academics') :");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }

    printf("Factorial of %d = %lu\n", n, factorial(n));

}