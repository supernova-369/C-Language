#include <stdio.h>
#include <string.h>// Required for strcmp()

int main() 
{
    int i=0;//You can't use before assigning it a value or initializing so if you don't asigned i=0 it will be a technical error.
    //undefined behaviour and code might crash or act random and this fraction_str array would had garbage value. hence the array will need to asigned the exact value it can store.
    char fraction_str[20];
    int numerator, denominator;
    char strt[100];

    // Use a do-while loop to ensure the prompt runs at least once
    do {
        printf("Do you want to enter a fraction? (yes/no): ");
        scanf("%19s", strt);
        // strcmp returns 0 if the strings are identical
        // The loop continues AS LONG AS the input is NOT "no"

        if (strcmp(strt, "no") == 0)
            break;

        printf("Enter a fraction in the format a/b (e.g., 3/4): ");
        scanf("%19s", fraction_str);

        if (sscanf(fraction_str, "%d/%d", &numerator, &denominator) != 2)
            /* scanf("%d/%d") is dangerous because it performs partial assignments, 
            leaves invalid data in the input buffer, and makes error recovery unreliable*/
        {
            printf("Invalid format. Try again.\n");
            continue;
        }

        if (denominator == 0) {
            printf("Invalid fraction: denominator cannot be zero.\n");
            continue;
        }

        printf("You entered: %d/%d\n", numerator, denominator);

    } while (1);
    
    if(fraction_str[0]!='\0'){
        printf("%s\n",fraction_str);
    }
    printf("It's terminated. Goodbye!\n");
    return 0;
}
