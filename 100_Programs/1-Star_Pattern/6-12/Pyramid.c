#include <stdio.h>

int main()
{
    int n=4;
    int z=1;

    for(int i =1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=z;k++){
            printf("* ");
        }
        printf("\n");
        z+=2;
    }
    return 0;
}
 