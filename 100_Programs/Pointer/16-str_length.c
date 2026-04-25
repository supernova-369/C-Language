#include <stdio.h>

int main()
{
    // Declare a character array to store the string
    char a[50];

    // Variable to count number of characters
    char count = 0;

    // Pointer to traverse the string
    char *ptr;

    // Ask user to enter a string
    printf("Enter the string you want to measure : ");

    // Read the string from user (no spaces allowed)
    scanf("%s", a);

    // Store the base address (address of first character a[0]) 
    // of the string array 'a' into the pointer 'ptr' so that
    // the pointer can be used to traverse the string character by character
    ptr = a;

    // Loop until null character '\0' is found
    while (*ptr != '\0')
    {
        count++;   // Increase count for each character
        ptr++;     // Move pointer to next character
    }

    // Print the length of the string
    printf("The length of the string is : %d", count);

    return 0;
}
