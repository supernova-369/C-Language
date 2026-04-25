#include <stdio.h>

int main()
{
    int n;
    unsigned long long fact =  1;

    printf("Enter the number to find it's factorial: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }
    
    // Calculate factorial using a loop
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }

    printf("The factorial of %d is %d", n, fact);


    return 0;
}