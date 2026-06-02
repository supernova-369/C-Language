#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,i,count;
    int n=100;
    
    for(i=2; i<n;i++)
    {
        
        count=0;
        
        for(a=1;a<=i;a++)
        {
            if(i%a==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("* %d",i);
        }
        else 
        {
            printf("  ");
        }
    }

    
    return 0;
}