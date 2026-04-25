#include <stdio.h>

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Reversed number: ");

    while (num > 0) {
        int digit = num % 10;  // get last digit
        printf("%d", digit);   // print it
        num /= 10;             // remove last digit
    }

    return 0;
}
