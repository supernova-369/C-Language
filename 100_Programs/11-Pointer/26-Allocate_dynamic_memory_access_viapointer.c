#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;

    // Dynamically allocate memory for 5 integers
    int *ptr = (int *)malloc(n * sizeof(int));

    // Check if allocation was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Store values using pointer indexing
    for (int i = 0; i < n; i++)
        ptr[i] = (i + 1) * 10;

    // Access values using pointer dereferencing
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    // Free allocated memory
    free(ptr);

    return 0;
}
