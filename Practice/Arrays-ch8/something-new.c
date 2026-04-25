#include <stdio.h>

int main()
{   
    char string[] = "HELLO WORLD"; // Corrected to use double quotes
    int m;
    for(m = 0; string[m] != '\0'; m++) {
        if((m % 2) == 0) {
            printf("%c", string[m]);
        }
    }

    return 0;
}
