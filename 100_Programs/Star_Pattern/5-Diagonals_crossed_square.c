#include <stdio.h>

int main()
{
    int n;
    int z;
    printf("What should be the side of your triangle? ");
    scanf("%d", &n);

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1 )
            {
                printf("* ");

            }else if((i==1 && j==n-2) || (i==1 && j==1)){
                    printf("* ");
            }else if((i==n-2 && j==n-2) || (i==n-2 && j==1) ){
                    printf("* ");        
            }else if((i==n/2 && j==n/2) || (i==2 && j==n-3)){
                    printf("* ");
            }else if((i==2 && j==2) || (i==n-3 && j==2) ){
                    printf("* ");
            }else
                {
                    printf("  ");   
                }
        }
        printf("\n");
    }
    return 0;
}