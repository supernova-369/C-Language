#include <stdio.h>
#include <ctype.h>  // for isalpha() and isdigit()

int main() {
    int tuna = '9';  // you can change this to test other characters

    if (isalpha(tuna)) {
        printf("%c is a letter.\n", tuna);
    }
    else if (isdigit(tuna)) {
        printf("%c is a number.\n", tuna);
    }
    else {
        printf("%c is a OMG WTF is that!?\n", tuna);
    }

    return 0;
}
