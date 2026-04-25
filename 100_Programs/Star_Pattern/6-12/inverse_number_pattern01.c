#include <stdio.h>

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
        for(int k=z;k>=1;k--)
        //it starts from z to 1 and z increases after once both the inner loops are iterated
        {
            printf("%d",k);//This print statement is changed in the code of pyramid
            // printf("%d",z);
            //printf("%d",i);
        }
        printf("\n");
        z+=2;
    }
    return 0;
}
