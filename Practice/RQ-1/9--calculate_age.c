#include <stdio.h>

int main()
{
    int year[6];
    int *brt = year;

    printf("Wanna find your age ?\n");
    printf("Enter date as per dd/mm/yyyy.\n");
    printf("(Note* - 1 to 3 is current date, 4 to 6 is date of birth.)\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Enter details %d: ", i + 1);
        scanf("%d", (brt + i));
    }

    // Mapping:
    // year[0] = current day
    // year[1] = current month
    // year[2] = current year
    // year[3] = birth day
    // year[4] = birth month
    // year[5] = birth year

    int day   = year[0] - year[3];
    int month = year[1] - year[4];
    int years = year[2] - year[5];

    // Adjust if day is negative (borrow 1 month = 30 days approx)
    if (day < 0)
    {
        day += 30;    // rough assumption
        month--;
    }

    // Adjust if month is negative (borrow 1 year = 12 months)
    if (month < 0)
    {
        month += 12;
        years--;
    }

    printf("Your current age is %d years %d months %d days.\n", years, month, day);

    return 0;
}
