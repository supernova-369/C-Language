#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, sum=0;
    int i;
    int count;
    for (int i=2; i<200;i++)
    {
            count = 0;
            for(a=1;a<=i;a++)
            {
                    if(i%a==0)
                    {
                        count++;
                    }
            }
            if (count==2)
    {
        sum+=i;
    }

    }
    printf("The sum of prime numbers between 1 to 20 is  %d",sum);
    return 0;
}