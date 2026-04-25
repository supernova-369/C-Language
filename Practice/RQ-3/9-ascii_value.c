#include <stdio.h>

int main() {
    int num = 98; // The integer whose ASCII character equivalent you want

    // When %c is used, printf treats the integer value as an ASCII code
    printf("The character for the ASCII value %d is %c\n", num, num);

    return 0;
}


#include <stdio.h>

int main() {
    int num = 65; // The integer whose ASCII character equivalent you want
    char ch = (char)num; // Explicitly cast the integer to a char

    printf("The character for the ASCII value %d is %c\n", num, ch);

    return 0;
}
