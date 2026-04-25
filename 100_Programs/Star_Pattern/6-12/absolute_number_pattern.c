#include <stdio.h>
#include <math.h>

int main()
{
    int n=5;
    int z=1;

    for(int i =1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=z;k++){
            printf("%d", abs(k-i));//This print statement is changed in the code of pyramid
            // printf("%d",z);
            //printf("%d",i);
        }
        printf("\n");
        z+=2;
    }
    return 0;
}
