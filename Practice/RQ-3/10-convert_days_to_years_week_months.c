#include <stdio.h>

int main()
{
        
    int year, months,weeks,remaining_day;
    int days,remaining_days,day;
    printf("NOTE* All Months are considered of 30 days!\n");
    printf("Enter the number of days :\n");
    scanf("%d",&days);

    printf("The details as per your days will be shown below.\n");

    if(days==0){
        printf("0 Year\n0 Months\n0 Weeks\n0 Days");
    }

    if(days>=365)
    {//% is the remainder
        year=days/365;
        remaining_days= days%365;
        months=remaining_days/30;
        remaining_day=remaining_days%30;
        weeks=remaining_day/7;
        day=remaining_day%7;
        printf("%d Year\n%d Months\n%d Weeks\n%d Days",year,months,weeks,day);
    }

    return 0;

}