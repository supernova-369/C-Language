#include <stdio.h>

int main()
{
    int user_array[100], positive_array[100], negative_array[100];
    int n, pos = 0, neg = 0;

    printf("How many integers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &user_array[i]);
    }

    printf("-------Array You Entered is ------> {");
    for (int i = 0; i <n ; i++)
    {
        printf(" %d", user_array[i]);
    }
    printf("}\n");

    /* Separate even and odd numbers */
    for (int i = 0; i < n; i++)
    {
        if (user_array[i] > 0)
        {
            positive_array[pos] = user_array[i];
            pos++;
        }
        else if(user_array[i] < 0 )
        {
            negative_array[neg] = user_array[i];
            neg++;
        }
        else
        {
            positive_array[pos] = user_array[i];
            pos++;
        }
    }

    /* Alternate merge */
    int p = 0, q = 0, k = 0;

    while (p < pos && q < neg)
    {
        user_array[k++] = positive_array[p++];
        user_array[k++] = negative_array[q++];
    }

    printf("-------Alternative Positive & Negative numbered Array is ------> {");
    for (int i = 0; i <n ; i++)
    {
        printf(" %d", user_array[i]);
    }
    printf("}\n");

    return 0;
}