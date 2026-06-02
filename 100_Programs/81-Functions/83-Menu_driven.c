#include <stdio.h>
#include <string.h>

int menu()
{
    int choice;
    printf("\n===== MENU =====\n");
    printf("1. Addition of two numbers\n");
    printf("2. Subtraction of two numbers\n");
    printf("3. Concatenate two strings\n");
    printf("4. Find length of a string\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);
    return choice;
}

void addition()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a + b);
}

void subtraction()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a - b);
}

void concatenation()
{
    char s1[50], s2[50];

    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    strcat(s1, s2);  // result stored in s1

    printf("Concatenated string: %s\n", s1);
}

void length()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %lu\n", strlen(str));
}

int main()
{
    int choice;

    do
    {
        choice = menu();

        switch (choice)
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                concatenation();
                break;
            case 4:
                length();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}