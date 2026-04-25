#include <stdio.h>

int main()
{
    int n, count;
    printf("Enter the range to find the prime numbers:");
    scanf("%d", &n);

    printf("List of all prime numbers(in range):\n");
    for(int i=2; i<=n; i++)
    {
        count=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        
        if(count==2)
        {
            printf("It's a prime number %d\n", i);
        }
    }

    return 0;
}