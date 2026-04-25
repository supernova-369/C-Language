#include <stdio.h>

int main() {
    int month;

    printf("Enter the number of month to find number of days: ");
    scanf(" %d",&month);
    switch (month) {
        case 1:
            printf("That's January\nNumber of days in January is 31");
            break;

        case 2:
            printf("That's February\nNumber of days in February is 28");
            break;

        case 3:
            printf("That's March\nNumber of days in March is 31");
            break;

        case 4:
            printf("That's April\nNumber of days in April is 30");
            break;

        case 5:
            printf("That's May\nNumber of days in May is 31");
            break;

        case 6:
            printf("That's June\nNumber of days in June is 30");
            break;

        case 7:
            printf("That's July\nNumber of days in July is 31");
            break;

        case 8:
            printf("That's August\nNumber of days in August is 31");
            break;
        
        case 9:
            printf("That's september\nNumber of days in september is 30");
            break;

        case 10:
            printf("That's October\nNumber of days in october is 31");
            break;

        case 11:
            printf("That's November\nNumber of days in November is 30");
            break;
        
        case 12:
            printf("That's December\nNumber of days in december is 31");
            break;

        default:
            printf("That doesn't even make sense!\n");
            break;
    }

    return 0;
}