#include <stdio.h>

int main()
{
    long long num;
    int hundred_crore, ten_crore, crore;
    int ten_lakh, lakh;
    int ten_thousand, thousand;
    int hundred, tens, ones;

    while (1)
    {
        printf("Enter a number (0 - 999,99,99,999) or -1 to exit: ");
        scanf("%lld", &num);

        if (num == -1) {
            printf("Exiting...\n");
            break;
        }

        if (num == 0) {
            printf("Zero\n");
            continue;   // ask for next input instead of exit
        }

        // extract each digit in (Indian system)
        hundred_crore = (num / 1000000000) % 10;
        ten_crore     = (num / 100000000)  % 10;
        crore         = (num / 10000000)   % 10;
        ten_lakh      = (num / 1000000)    % 10;
        lakh          = (num / 100000)     % 10;
        ten_thousand  = (num / 10000)      % 10;
        thousand      = (num / 1000)       % 10;
        hundred       = (num / 100)        % 10;
        tens          = (num / 10)         % 10;
        ones          =  num % 10;

        // Crores
        switch (hundred_crore) {
            case 1: printf("One Hundred"); break;
            case 2: printf("Two Hundred"); break;
            case 3: printf("Three Hundred"); break;
            case 4: printf("Four Hundred"); break;
            case 5: printf("Five Hundred"); break;
            case 6: printf("Six Hundred"); break;
            case 7: printf("Seven Hundred"); break;
            case 8: printf("Eight Hundred"); break;
            case 9: printf("Nine Hundred"); break;
        }

        if (ten_crore==1)
        {
            switch (crore)
            {
                case 0: printf(" Ten Crore"); break;
                case 1: printf(" Eleven Crore"); break;
                case 2: printf(" Twelve Crore"); break;
                case 3: printf(" Thirteen Crore"); break;
                case 4: printf(" Fourteen Crore"); break;
                case 5: printf(" Fifteen Crore"); break;
                case 6: printf(" Sixteen Crore"); break;
                case 7: printf(" Seventeen Crore"); break;
                case 8: printf(" Eighteen Crore"); break;
                case 9: printf(" Nineteen Crore"); break;

            }
        }else {
            switch (ten_crore)
            {
                case 2: printf(" Twenty"); break;
                case 3: printf(" Thirty"); break;
                case 4: printf(" Forty"); break;
                case 5: printf(" Fifty"); break;
                case 6: printf(" Sixty"); break;
                case 7: printf(" Seventy"); break;
                case 8: printf(" Eighty"); break;
                case 9: printf(" Ninety"); break;
            }

            switch (crore)
            {
                case 1: printf(" One Crore"); break;
                case 2: printf(" Two Crore"); break;
                case 3: printf(" Three Crore"); break;
                case 4: printf(" Four Crore"); break;
                case 5: printf(" Five Crore"); break;
                case 6: printf(" Six Crore"); break;
                case 7: printf(" Seven Crore"); break;
                case 8: printf(" Eight Crore"); break;
                case 9: printf(" Nine Crore"); break;
            }
        }

        // ----- Lakhs -----
        if (ten_lakh == 1) {
            // 10–19 Lakh
            switch (lakh) {
                case 0: printf(" Ten Lakh"); break;
                case 1: printf(" Eleven Lakh"); break;
                case 2: printf(" Twelve Lakh"); break;
                case 3: printf(" Thirteen Lakh"); break;
                case 4: printf(" Fourteen Lakh"); break;
                case 5: printf(" Fifteen Lakh"); break;
                case 6: printf(" Sixteen Lakh"); break;
                case 7: printf(" Seventeen Lakh"); break;
                case 8: printf(" Eighteen Lakh"); break;
                case 9: printf(" Nineteen Lakh"); break;
            }
        } else {
            // tens of lakh: 20, 30, ...
            switch (ten_lakh) {
                case 2: printf(" Twenty"); break;
                case 3: printf(" Thirty"); break;
                case 4: printf(" Forty"); break;
                case 5: printf(" Fifty"); break;
                case 6: printf(" Sixty"); break;
                case 7: printf(" Seventy"); break;
                case 8: printf(" Eighty"); break;
                case 9: printf(" Ninety"); break;
            }
            // single lakh
            switch (lakh) {
                case 1: printf(" One Lakh"); break;
                case 2: printf(" Two Lakh"); break;
                case 3: printf(" Three Lakh"); break;
                case 4: printf(" Four Lakh"); break;
                case 5: printf(" Five Lakh"); break;
                case 6: printf(" Six Lakh"); break;
                case 7: printf(" Seven Lakh"); break;
                case 8: printf(" Eight Lakh"); break;
                case 9: printf(" Nine Lakh"); break;
            }
        }

        // ----- Thousands -----
        if (ten_thousand == 1) {
            // 10–19 thousand
            switch (thousand) {
                case 0: printf(" Ten Thousand"); break;
                case 1: printf(" Eleven Thousand"); break;
                case 2: printf(" Twelve Thousand"); break;
                case 3: printf(" Thirteen Thousand"); break;
                case 4: printf(" Fourteen Thousand"); break;
                case 5: printf(" Fifteen Thousand"); break;
                case 6: printf(" Sixteen Thousand"); break;
                case 7: printf(" Seventeen Thousand"); break;
                case 8: printf(" Eighteen Thousand"); break;
                case 9: printf(" Nineteen Thousand"); break;
            }
        } else {
            // tens of thousand: 20,30,...
            switch (ten_thousand) {
                case 2: printf(" Twenty"); break;
                case 3: printf(" Thirty"); break;
                case 4: printf(" Forty"); break;
                case 5: printf(" Fifty"); break;
                case 6: printf(" Sixty"); break;
                case 7: printf(" Seventy"); break;
                case 8: printf(" Eighty"); break;
                case 9: printf(" Ninety"); break;
            }
            // single thousand
            switch (thousand) {
                case 1: printf(" One Thousand"); break;
                case 2: printf(" Two Thousand"); break;
                case 3: printf(" Three Thousand"); break;
                case 4: printf(" Four Thousand"); break;
                case 5: printf(" Five Thousand"); break;
                case 6: printf(" Six Thousand"); break;
                case 7: printf(" Seven Thousand"); break;
                case 8: printf(" Eight Thousand"); break;
                case 9: printf(" Nine Thousand"); break;
            }
        }

        // Hundreds place
        switch (hundred) {
            case 1: printf(" One Hundred"); break;
            case 2: printf(" Two Hundred"); break;
            case 3: printf(" Three Hundred"); break;
            case 4: printf(" Four Hundred"); break;
            case 5: printf(" Five Hundred"); break;
            case 6: printf(" Six Hundred"); break;
            case 7: printf(" Seven Hundred"); break;
            case 8: printf(" Eight Hundred"); break;
            case 9: printf(" Nine Hundred"); break;
        }

        // ----- Last two digits: 10–19 vs others -----
        if (tens == 1) {
            // 10–19
            switch (ones) {
                case 0: printf(" Ten"); break;
                case 1: printf(" Eleven"); break;
                case 2: printf(" Twelve"); break;
                case 3: printf(" Thirteen"); break;
                case 4: printf(" Fourteen"); break;
                case 5: printf(" Fifteen"); break;
                case 6: printf(" Sixteen"); break;
                case 7: printf(" Seventeen"); break;
                case 8: printf(" Eighteen"); break;
                case 9: printf(" Nineteen"); break;
            }
        } else {
            // 20,30,... in tens
            switch (tens) {
                case 2: printf(" Twenty"); break;
                case 3: printf(" Thirty"); break;
                case 4: printf(" Forty"); break;
                case 5: printf(" Fifty"); break;
                case 6: printf(" Sixty"); break;
                case 7: printf(" Seventy"); break;
                case 8: printf(" Eighty"); break;
                case 9: printf(" Ninety"); break;
            }
            // Ones (only when tens != 1)
            switch (ones) {
                case 1: printf(" One"); break;
                case 2: printf(" Two"); break;
                case 3: printf(" Three"); break;
                case 4: printf(" Four"); break;
                case 5: printf(" Five"); break;
                case 6: printf(" Six"); break;
                case 7: printf(" Seven"); break;
                case 8: printf(" Eight"); break;
                case 9: printf(" Nine"); break;
            }
        }

        printf("\n");
    }

    return 0;
}