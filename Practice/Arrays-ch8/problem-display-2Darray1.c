#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][3];
    printf("Enter the elements in the array : ");
    scanf("%d", &arr[0][0]);
    scanf("%d", &arr[0][1]);
    scanf("%d", &arr[0][2]);
    scanf("%d", &arr[1][0]);
    scanf("%d", &arr[1][1]);
    scanf("%d", &arr[1][2]);

    
    printf("{ %d,",arr[0][0]);
    printf(" %d,",arr[0][1]);
    printf("  %d,\n",arr[0][2]);
    printf(" %d,",arr[1][0]);
    printf(" %d,",arr[1][1]);
    printf(" %d }",arr[1][2]);

    return 0;
}