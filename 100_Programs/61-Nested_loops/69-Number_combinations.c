#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char ch[4];

    printf("Enter the number to find combinations possible (x,y) {Only Natural numbers}");
    scanf("%d", &n);

    printf("Do you want all possible combinations ? (YES/NO)");
    scanf("%s", ch);

    if(strcmp(ch , "YES") == 0)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                printf("( %d  %d)\n", i, j);
            }
        }
    }
    else if (strcmp( ch , "NO" ) == 0)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                printf("( %d  %d)\n", i, j);
            }
        }
    }
    else 
    {
        printf("InValid Input! TRY AGAIN...\n");
    }
}