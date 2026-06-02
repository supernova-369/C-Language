#include<stdio.h>

int main()
{
    int n = 5;
    int a[n];

    printf("Enter the elements in Array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp; 
    temp = a[0];
    a[0] = a[n-1];
    a[n - 1] = temp;

    printf("Array after cylic shift : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}