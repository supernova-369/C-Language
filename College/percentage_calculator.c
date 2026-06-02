#include <stdio.h>

// Function declaration
float calculate_percentage(int marks[], int size);

int main()
{
    int marks[5];
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Function call
    percentage = calculate_percentage(marks, 5);

    // Display result
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

// Function definition
float calculate_percentage(int marks[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += marks[i];
    }

    // Assuming each subject is out of 100
    return (sum / (float)(size * 100)) * 100;
}