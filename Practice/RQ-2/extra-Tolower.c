#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
    }

    printf("Lowercase text: %s", text);

    return 0;
}
