#include <stdio.h>

int main() {
    int num, digits[20], count = 0;

    printf("Welcome to the number into words convertor!\n");
    printf("Enter the numbers you want to convert in words : ");
    scanf(" %d", &num);

    if (num == 0) {
        printf("Zero");
        return 0;
    }

    // Store digits in an array
    while (num > 0) {
        digits[count] = num % 10;  // to get last digit
        num /= 10;                 // remove last digit
        count++;                   // increase count
    }

    // Print digits in reverse order stored (original order)
    for (int i = count-1 ; i >= 0; i--) {//technically "count-1" is correct but "count" also works good
            //in the array we store digits from right to left and then printed them from left to right by going backwards in the array
        switch (digits[i]) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
    }

    return 0;
}
