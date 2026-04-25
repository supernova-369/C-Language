#include <stdio.h>

int main()
{
    int n = 5;

    // Outer loop to iterate through each loop
    for (int i = 0; i < n; i++)
    // i Handles no. of rows 
    {

        // First inner loop to print leading whitespaces
        for(int j=n-1;j>=i;j--)
        //j Handles spaces from first row 
        {
            printf("  ");
        }
        
        // Second inner loop to print stars * and inner whitespaces
        for (int k = 0; k < 2 * i + 1; k++)
        //k handles print pattern after working of j ends
        {
            if (k == 0 || k == 2 * i || i == n - 1)
            // k==0 means just after the spaces hence it prints astrix after complition of first inner loop
            // k==2*i means just before k ends which is second side of the triangle(or pyramid)
            // i==n-1 means the last row (if it means last row then why it goes till n-1 , becoz in outer loop i<n so outerloop runs till n-1) so this will print the pattern and that will be the bottom of the pyramid
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}