#include <stdio.h>
#include <ctype.h>   // required for isalpha() and isdigit()

int main() {
    char tuna = '&';
    //' ' this is used for single character

    if (isalpha(tuna)) {
        printf("%c is a letter", tuna);
    }
    else {
        if (isdigit(tuna)) {
            printf("%c is a number", tuna);
        }
        else {
            printf("%c is a OMG WTF is that?!", tuna);
        }
    }

    return 0;
}