#include <stdio.h>

void traversing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int sum(int arr[], int n)
{
    int sum_of_elements = 0;
    for(int i = 0; i < n; i++)
    {
        sum_of_elements += arr[i];
    }

    return sum_of_elements;
}


int main()
{
    int progress[20], n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &progress[i]);
    }

    traversing(progress, n);

    printf("Sum of elements in the array is %d", sum(progress, n));

    return 0;
}