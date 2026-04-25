#include <stdio.h>

int main() {
    int number;
    int positive_count = 0;
    int negative_count = 0;

    printf("Enter a set of integers (enter 0 to terminate input):\n");

    // Loop until the user enters 0
    while (scanf("%d", &number) == 1 && number != 0) {
        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        }
        // If the number is 0, the while condition terminates the loop.
    }

    printf("\n--- Results ---\n");
    printf("Total Positive Numbers: %d\n", positive_count);
    printf("Total Negative Numbers: %d\n", negative_count);

    return 0;
}
