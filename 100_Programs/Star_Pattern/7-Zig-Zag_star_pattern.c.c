#include <stdio.h>

int main()
{
    int n = 3;//rows
    int z = 15;//columns
    int a = 1;//repition(cycle)

    for (int i = 1; i <= n; i++)
    {
        a = 1;

        for (int j = 1; j <= z; j++)
        {
            if ((a == 1 && i == 1) || 
                (a == 2 && i == 2) || (a == 4 && i == 2) ||
                (a == 3 && i == 3))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            a++;
            if (a == 5)
                a = 1;
        }
        printf("\n");
    }

    return 0;
}
