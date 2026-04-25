#include <stdio.h>
#include <math.h>

int main()
{
    int n=4;
    int z=7;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=z;k++){
            printf("* ");
        }
        printf("\n");
        z-=2;
    }
    return 0;
}
