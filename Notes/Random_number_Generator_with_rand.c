#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int diceroll;
    
    for (i=0 ; i<20 ; i++){
        diceroll = (rand()%6)+1;
/*rand()

This is a built-in C function from <stdlib.h> that returns a random integer between 0 and RAND_MAX (a large constant, often 32767).

But we usually don’t want such a big number — we want something smaller, like a dice value.

rand() % 6

The % operator gives the remainder when dividing by 6.

This limits the result to 0, 1, 2, 3, 4, or 5.

So now we have a random number between 0 and 5.

+ 1

Since a dice has faces numbered 1 to 6, not 0 to 5, we add 1.

This shifts the range to 1–6. */
        printf("%d \n", diceroll);
    }
    return 0;
}