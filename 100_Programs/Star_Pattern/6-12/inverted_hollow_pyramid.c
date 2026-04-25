#include <stdio.h>

int main()
{
    int n = 6;
      int z=7;

    // Outer loop
    for (int i = 0; i <= n; i++)
    {

        // First inner loop to print leading whitespaces
        for(int j=0;j<i;j++)
        {
            printf("  ");
        }
        
        // Second inner loop to print stars * and inner whitespaces
        for (int k = 0; k < z; k++)
        {
            if (k == 0 || k == z-1  || i == 0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        z-=2;
    }
    return 0;
}