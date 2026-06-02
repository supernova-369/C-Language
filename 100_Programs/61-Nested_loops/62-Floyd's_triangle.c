#include<stdio.h>

int main()
{
    int n = 1; 
    
    // FLoyd's Triangle till 10
    for(int i = 1; i < 5; i++)
    {
        for(int j = 0; j >= i; j++)
        {
            printf("%d", n);
            n++;
        }

    }
}