//It is separated using another array  
#include <stdio.h>

int main()
{
    int mixed_array[100];
    int even_array[100], odd_array[100];
    int n, even_count = 0, odd_count = 0;

    printf("How many integers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mixed_array[i]);
    }

    /* Separate even and odd numbers */
    for (int i = 0; i < n; i++)
    {
        if (mixed_array[i] % 2 == 0)
        {
            even_array[even_count++] = mixed_array[i];
        }
        else
        {
            odd_array[odd_count++] = mixed_array[i];
        }
    }

    printf("------- Even Array ------> { ");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d ", even_array[i]);
    }
    printf("}\n");

    printf("------- Odd Array -------> { ");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d ", odd_array[i]);
    }
    printf("}\n");

    return 0;
}
