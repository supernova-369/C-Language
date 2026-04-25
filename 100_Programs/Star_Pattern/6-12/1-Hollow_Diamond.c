#include <stdio.h>

int main()
{
    int n = 6;
    int totalrows = 2 * n - 1;
    int z=1;
    
    for(int i=1; i <= totalrows;i++)
    {
    
        int a = (i<=n) ? i : (2 * n - i);
        z = (i<=n) ? ((i==1) ? z : (z+2) ) : ((i==2*n) ? z : (z-2));
        for(int j = 1;j <= n - a;j++)
        {
            printf("  ");
        }
        
        for(int k = 1;k <=z;k++)
        {
            if(k==1 || k==z){
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}