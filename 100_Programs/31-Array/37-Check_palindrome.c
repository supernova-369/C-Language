//Example of palindrome is MADAM it doesn't matter whether you read that from right or left it is the same.
#include<stdio.h>
#include<stdlib.h>

int isPalindrome(int num)
{
    int OG=num;
    int reversed = 0, digit;

    while (num > 0)
    {
        digit = num % 10;          
        // Extracts the last digit of the number

        reversed = reversed * 10 + digit;  
        // The extracted digit is add into reversed variable and it is multiplied by 10 since in the above sent num%10 gives the remainder    //

        num = num / 10;            
        // Removes the last digit from the number so it doesn't operate on the same nos. twice or more
        // %10 → gets last digit(Remainder Operator)
        // /10 → removes last digit(Division Operator)
    }

    if (OG == reversed)
        return 1;   // true
    else
        return 0;   // false
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not\n");
    scanf("%d",&number);

    if(isPalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }
    return 0;
}