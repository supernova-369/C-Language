#include <stdio.h>
#include <ctype.h>  // for isdigit()

int main() {
    char word[100];
    int i = 0;

    printf("Enter a word (mix of letters and numbers): ");
    scanf("%s", word);   // input from user

    printf("Numbers in the word: ");

    while (word[i] != '\0') {  // loop through each character
        if (isdigit(word[i])) {   // check if it's a digit
            printf("%c", word[i]);
        }
        i++;
    }
    return 0;
}
