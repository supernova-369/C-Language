#include <stdio.h>

int main()
{
    int n = 5;
    int totalrows=2*n-1;
    int z=0;
    int a=9;
    int b=n+2;

    for(int i=1;i<=totalrows;i++)
    {
        a=((i<=n) ? (a-2) : (a+2));
        z=((i<=n) ? (z+1) : (z-1));
        b=((i<=n) ? (b-1) : (b+1));

        for(int j=0;j<z;j++)
        {
            printf("* ");
        }

        for(int k=0;k<=b;k++)
        {
            
            if(i==n)
            {
                printf("");
            }
            else if(k<=n-2 || (i==1 && k<=b-1) || (i==totalrows && k<=b-1))
            {
                printf("--");
            }
            else 
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}