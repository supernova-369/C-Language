#include <stdio.h>

void my_strcat(char *s1,char *s2)
/*
char *s2 → pointer to the destination string.

char *s1 → pointer to the source string.

Return type is void because the destination string is modified directly.
*/
{
    while(*s1!='\0')
    s1++;
    while(*s2!='\0')
    *s1++ = *s2++;
    /*
    *s2 = *s1 → copy character.
    s2++ → move destination pointer forward.
    s1++ → move source pointer forward.
    */
    *s1 = '\0';
    //Adds a null character at the end of the combined string. This is mandatory to mark the end of the new string.
}

int main()
{
    char str1[20]="hello",str2[]="world";
    my_strcat(str1,str2);
    /*
    char *s2 → pointer to the destination string.
    char *s1 → pointer to the source string.
    Return type is void because the destination string is modified directly.
    */
    printf("String1 is : %s",str1);
}