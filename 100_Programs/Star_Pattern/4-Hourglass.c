#include <stdio.h>

int main()
{
    int n = 8;
    int totalrows=2*n-1;
    int z=0;
    int a=2*n+1;

    for(int i=1;i<=totalrows;i++)
    {
        a=((i<=n) ? (a-2) : (a+2));
        z=((i<=n) ? (z+1) : (z-1));

        for(int j=1;j<z;j++)
        {
            printf("  ");
        }

        for(int k=0;k<a;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}