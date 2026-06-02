#include <stdio.h>

int main()
{
    int n = 200, count;

    printf("Prime Numbers in the range (1-200):\n");

    for(int i = 2; i <= n; i++)
    {
        count = 0;

        for(int j = 1; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 1) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}