#include<stdio.h>

int main()
{
    int n, sum_prefix=0, prefix[100];

    printf("How many elements do you want to enter in the array? ");
    scanf("%d", &n);

    printf("Enter %d integers:", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &prefix[i]);
    }

    printf("This is the Array you entered : ");
    printf("{");
    for(int i=0; i<n; i++)
    {
        printf(" %d", prefix[i]);
    }
    printf(" }\n");

    for(int j=0; j<n; j++)
    {
        sum_prefix+=prefix[j];
    }

    printf("The sum of the prefix is %d",sum_prefix);
    return 0;
}