#include <stdio.h>

int main()
{
    int n = 6;
    int totalrows=2*n-1;
    int z = 0;
    int b = 0;
    int a = 2*n-1;

    for(int i=1;i<=totalrows;i++)
    {
        a=((i<=n) ? (a-2) : (a+2));
        z=((i<=n) ? (z+1) : (z-1));
        b=((i<=n) ? (b+1) : (b-1));

        for(int j=0;j<z;j++)
        {
            printf("* ");
            // if(z==n)
            // {
            //     printf(" ");
            // }
            // else
            // {
            //     printf("* ");
            // }
        }

        for(int k=0;k<a;k++)
        {
            printf("  ");
        }

        for(int k=0;k<b;k++)
        {
            if(i==n & k==n-1){
                printf("");
            }
            else{
                printf("* ");
            }
            // if(b==n){
            //     printf(" ");
            // }         
            // else
            // {
            //     printf("* ");
            // }
        }
        printf("\n");
    }
}