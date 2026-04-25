#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); // Read a single character from the user

    // Print the character using %c and its ASCII value using %d
    printf("The ASCII value of %c is %d\n", ch, ch);

    return 0;
}



#include <stdio.h>

int main() {
    char ch;
    int ascii_value;

    printf("Enter a character: ");
    scanf("%c", &ch); // Read a single character

    // Explicitly typecast the character to an integer
    ascii_value = (int)ch;

    // Print the stored integer value
    printf("The ASCII value of %c is %d\n", ch, ascii_value);

    return 0;
}
