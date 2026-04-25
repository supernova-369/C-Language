#include <stdio.h>

int main() {
    long long num;
    long long count = 0;

    printf("Enter any number: ");
    scanf("%lld", &num);
    //Because a long long can only store up to 9,223,372,036,854,775,807. That is 19 digits max.
    //scanf CANNOT read more than 19 digits into a long long

    while (num != 0) {
        num = num / 10;   // remove last digit
        count++;          // increase count
    }


    printf("Total digits = %lld\n", count);

    return 0;
}
//Code from chatgpt but my logic was same just didn't knew the code

