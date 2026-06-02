#include<stdio.h>

int main()
{
    int first_array[100], second_array[100];
    int n, m, count = 0;

    printf("How many integers do you want in your first array ?");
    scanf("%d", &n);

    printf("Enter %d integers:", n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &first_array[i]);
    }

    printf("How many integers do you want in your second array ?");
    scanf("%d", &m);

    printf("Enter %d integers:", m);
    for(int i = 0; i<m; i++)
    {
        scanf("%d", &second_array[i]);
    }

    for (int i=0; i<n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(first_array[i] == second_array[j])
            {
                count++;
            }
           
        }
    }

    printf("%d Element(s) are common in both arrays.", count);
}