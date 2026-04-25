#include <stdio.h>

int main()
{
    int n = 5;

    // This loop for traverse pyramid from top to bottom
    for (int i = 0; i < n; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}