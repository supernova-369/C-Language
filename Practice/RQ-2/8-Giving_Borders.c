#include <stdio.h>

// function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// function to subtract two numbers
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int x = 20, y = 10;

    int sum = add(x, y);
    int diff = sub(x, y);

    // printing with border lines
    printf("********************\n");
    printf("*  %d + %d = %d   *\n", x, y, sum);
    printf("*  %d - %d = %d   *\n", x, y, diff);
    printf("********************\n");

    return 0;
}
