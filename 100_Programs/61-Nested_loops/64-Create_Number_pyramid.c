#include <stdio.h>

int main()
{
    int n = 4;
    int z = 1;
    int a = 1;

    //Printing pattern till 10
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >=i ; j--)
        {
            printf("  ");
        }

        for(int k = 0; k <z; k++)
        {
            printf("    %d" , a);
            a++;
        }
        printf("\n");
        z++;
    }

    return 0;
}


/*
        1
      2  3
    4  5  6
   7 8  9  10
*/