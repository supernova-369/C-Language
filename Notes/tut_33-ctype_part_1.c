#include <stdio.h>
#include <ctype.h>   // for isalpha() and isdigit()

int main() {
    char tuna[20] = "yash197";

    int i = 0;
    while (tuna[i] != '\0') {  // loop until end of string
    // \0 is null  
        if (isalpha(tuna[i])) {
            printf("%c is a letter\n", tuna[i]);
        } 
        else if (isdigit(tuna[i])) {
            printf("%c is a number\n", tuna[i]);
        } 
        else {
            printf("%c is a special character\n", tuna[i]);
        }
        i++;
    }

    return 0;
}