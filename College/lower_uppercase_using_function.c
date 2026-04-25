#include<stdio.h>
#include<ctype.h>
#include<string.h>

void to_lower(char str_input[]);
void to_upper(char str_input[]);

int main()
{
    char str_input[100];
    char to_decide[10];

    printf("Enter the string: ");
    scanf("%s", str_input);
    
    printf("In which case do you want to change your text?(For Uppercase - upper, For Lowercase - lower)");
    printf("\n(* Give input in lowercase only) ");
    scanf("%s", to_decide);

    if(strcmp(to_decide, "upper") == 0)
    {
        to_upper(str_input);
        printf("Uppercase string: %s\n", str_input); 
    }
    else if(strcmp(to_decide , "lower") == 0)
    {
        to_lower(str_input);
        printf("Lowercase string: %s\n", str_input); 
    }
    else
    {
        printf("Invalid*");
    }
}

//Converting to lowercase
void to_lower(char str_input[])
{
    for(int i = 0; i < strlen(str_input); i++) 
    {
        str_input[i] = tolower(str_input[i]);
    }
    
}

//Converting to uppercase
void to_upper(char str_input[])
{
    for(int i = 0; i < strlen(str_input); i++) 
    {
        str_input[i] = toupper(str_input[i]);
    }
}
