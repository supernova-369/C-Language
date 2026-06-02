#include <stdio.h>
#include <math.h>

int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int j=5;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=4;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}