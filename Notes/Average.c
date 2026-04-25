
#include <stdio.h>   // Header file for input/output functions (printf, scanf)
#include <stdlib.h>  // Header file for malloc() and free()

int main() {
    int i, howmany;         // 'i' for loop counter, 'howmany' for number of elements
    int total = 0;          // Variable to store the sum of all numbers (initialized to 0)
    float average = 0.0;    // Variable to store the final average
    int *pointarray;        // Pointer that will point to a dynamically allocated array

    // Ask the user how many numbers they want to average
    printf("How many numbers do you want to average?\n");
    scanf("%d", &howmany);  // Read the number and store it in 'howmany'

    // Dynamically allocate memory for 'howmany' integers
    // malloc() returns a pointer to the allocated memory block

    // malloc = asking the system for 'howmany' empty boxes to store numbers
    // sizeof(int) = size of each box
    // pointarray will store the address of those boxes
    pointarray = (int*) malloc(howmany * sizeof(int));

    // Check if malloc() failed (returns NULL if memory could not be allocated)
    if (pointarray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;   // Exit program with error code
    }

    // Ask the user to enter all the numbers
    printf("Enter them boss!\n");

    // Loop to take input and calculate the sum
    for (i = 0; i < howmany; i++) {
        scanf("%d", &pointarray[i]);  // Read each number and store it in the array
        // Put number in ith box
        total += pointarray[i];       // Add it to the running total
    }
  
    // Calculate the average (casting total to float for decimal result)
    // Cast 'total' to float to avoid integer division
    average = (float) total / howmany;

    // Display the result
    printf("Average is %.2f\n", average);  // %.2f prints 2 digits after the decimal

    // Free the dynamically allocated memory to prevent memory leaks
    // free() = returning the boxes back to the system after we finish using them
    free(pointarray);

    // Optional: set pointer to NULL so it doesn’t point to memory that is gone
    pointarray = NULL;

    return 0;
}