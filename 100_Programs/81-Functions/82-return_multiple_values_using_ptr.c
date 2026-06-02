#include <stdio.h>

// Function to return multiple values
void calculate(int a,
               int b,
               int *sum,
               int *difference)
{
    *sum = a + b;

    *difference = a - b;
}

int main()
{
    int num1, num2;

    int sum, difference;

    printf("Enter two numbers: ");

    scanf("%d%d",
          &num1,
          &num2);

    calculate(
        num1,
        num2,
        &sum,
        &difference);

    printf("\nSum = %d",
           sum);

    printf("\nDifference = %d",
           difference);

    return 0;
}