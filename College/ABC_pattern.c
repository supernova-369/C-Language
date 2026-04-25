#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=5; j>i; j-- )
        {
            printf("  ");
        }

        for(int k=1; k<=i; k++)
        {
            printf(" %c", 'A' + k-1 ); //Single inverted comma is considered as the ASCII value which on increase prints the equivalent alphabet.
            /*
            printf(" %c", "A" + k-1 ); Whereas Double inverted comma is considered as a pointer which stores it as "A""\0"
            so it's address is used instead of ascii value hence on increasing that it give garbage value output
            */ 
        }
        printf("\n");
    }

    return 0;
}