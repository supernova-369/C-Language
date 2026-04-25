#include <stdio.h>

int main()
{
    int n=5;
    int z=1;
    int j;
    for(int i =1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=z;k++){
            //printf("%c",i+64);
            printf("%c",z+64);
            //printf("%c",k+64);
        }
        printf("\n");
        z+=2;
    }
    return 0;
}
