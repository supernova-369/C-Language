#include <stdio.h>

int main()
{
    int currency;
    printf("Enter the value you wanna convert to Indian currency system : ");
    scanf("%d",currency);

    while(1)
    {
        int one_crore   =currency%10000000;
        int ten_lakh    =currency%1000000;
        int one_lakh    =currency%100000;
        int ten_thousand=currency%10000;
        int one_thousand=currency%1000;
        int one_hundered=currency%100;
        int tens        =currency%10;
        int one;

    };

    return 0;
}