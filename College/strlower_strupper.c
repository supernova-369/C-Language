// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main()
// {
//     char str_input[100];
    
//     printf("Enter the string: ");
//     scanf("%s", str_input);
    
//     // Convert to lowercase
//     for(int i = 0; i < strlen(str_input); i++) {
//         str_input[i] = tolower(str_input[i]);
//     }
    
//     printf("Lowered string is: %s\n", str_input);
    
//     return 0;
// }



#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str_input[100];
    
    printf("Enter the string: ");
    scanf("%s", str_input);
    
    // Convert to lowercase
    for(int i = 0; i < strlen(str_input); i++) {
        str_input[i] = toupper(str_input[i]);
    }
    
    printf("Uppercased string is: %s\n", str_input);
    
    return 0;
}