#include <stdio.h>

int getValidInput()
{
    int select;

    do
    {
        printf("Guess the correct number to win: ");
        scanf("%d", &select);

        if (select < 0)
        {
            printf("Please enter a positive number.\n");
        }

    } while (select < 0);

    return select;
}

void guess(int select)
{
    if (select == 19)
    {
        printf("You are winner\n");
    }
    else if (select > 19)
    {
        printf("You guessed higher!\n");
    }
    else
    {
        printf("You guessed lower!\n");
    }
}

int main()
{
    int select = getValidInput();
    guess(select);

    return 0;
}