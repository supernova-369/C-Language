//It is separated in the same array
//This isn't correct fully but this was a try to do it differently.
#include <stdio.h>

int main()
{
    int mixed_array[100];
    int n, count = 0;

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
            mixed_array[count++] = mixed_array[i];
        }    
    }

    for (int i = 0; i < n; i++)
    {
        if (mixed_array[i] % 2 != 0)
        {
            mixed_array[count++] = mixed_array[i];
        }
    }


    printf("------- Even & Odd numbers Separated and that Array is ------> { ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", mixed_array[i]);
    }
    printf("}\n");

    return 0;
}