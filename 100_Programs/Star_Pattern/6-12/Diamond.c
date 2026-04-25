#include <stdio.h>

int main()
{
    int n = 4;
    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++)
    //since in a diamond mid line has to be longer than preceeding and succeeding line, there can't be 2 mid lines so here we do 2n-1 which converts any no. of rows to odd number of rows so there won't be 2 midline 
    {
        // Determine effective row
        // Ternery operator
        /*
        Why this is required ?
            it is neccessary because in diamond pattern first the number of astrix increase and later on decrease
            which is handled by this operator for the first half i<=n is true so a=i and then a=2*n-i for example
            i=5 i is not less than n 
            a=8-5=3
            so it controls spaces and this will lead increasing spaces since on i=4 there were no leading spaces
            and later on it prints 2*a-1 that is 5 , 3  & 1
        */
        int a = (i<= n) ? i : (2 * n - i);

        // Print spaces
        for (int j = 1; j <= n - a; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 2 * a - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
