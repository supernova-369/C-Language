#include <stdio.h>

void reverse_string(char *string);

int main()
{
    char string[] = "abcde";
    reverse_string(string);
    printf("%s\n", string);

    return 0;
}

void reverse_string(char *string)
{
    if(string == NULL) 
    {
        return ;
    }
    
    char *end = string; // This points to first element but to change that while loop is applied 
    if(*end == '\0') //To check if does it even contain characters
    {
        return ;
    }

    while(*end != '\0')end++; //end is pointed to the first element of the string but as it is required to point at the end so this while loop helps in moving pointer end to the last that's \0 ;
    end--; // decrement operator since this while loop will make end point to the NULL but we want it to point towards last string char which NULL-1

    char *start = string; //adress of string[0] is stored in *start; 

    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}