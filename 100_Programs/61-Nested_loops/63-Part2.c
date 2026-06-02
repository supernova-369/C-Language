#include <stdio.h>

int main()
{
    int n = 20;

    for(int i = 2; i <= n; i++)
    {
        int isPrime = 1;   // assume it's prime

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;   // found a divisor
                break;
            }
        }

        if(isPrime) // if(isPrime == 1) Both are same
        {
            printf("%d ", i);
        }
    }

    return 0;
}
/*
isPrime = 1  → true  → executes
isPrime = 0  → false → skips

if(isPrime)        // ✔ preferred
if(isPrime == 1)   // ✔ explicit
if(!isPrime)       // ✔ means NOT prime
*/