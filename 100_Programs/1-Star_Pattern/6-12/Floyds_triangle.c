#include <stdio.h>

int main()
{
    int rows = 4;
    int n = 1;

    // outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    
    return 0;
}