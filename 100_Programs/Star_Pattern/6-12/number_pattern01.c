#include <stdio.h>
#include <math.h>
int main()
{
    int n=5;
    int z=1;
    int i,j,k;

    for(int i =1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=i-1;k>=-(i-1);k--){
            printf("%d",i-abs(k));//This print statement is changed in the code of pyramid
        }
        printf("\n");
        z+=2;
    }
    return 0;
}
