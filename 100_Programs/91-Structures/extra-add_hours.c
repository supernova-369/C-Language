#include <stdio.h>

// Define the time structure
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two time periods
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time sum;

    // Add individual components
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds / 60);
    sum.hours = t1.hours + t2.hours + (sum.minutes / 60);

    // Adjust values to stay within 0-59 range
    sum.seconds %= 60;
    sum.minutes %= 60;

    return sum;
}

int main() {
    struct Time t1, t2, result;

    // Read first time period
    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Read second time period
    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Call function to get the sum
    result = addTime(t1, t2);

    // Display the final result
    printf("\nTotal Time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
