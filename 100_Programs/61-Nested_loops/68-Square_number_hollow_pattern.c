#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows to determine the size of the square :");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n || j == 0 || j == n)
            {
                printf(" *");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}