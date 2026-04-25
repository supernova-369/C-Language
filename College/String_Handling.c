#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    printf("Enter the first string :");
    scanf("%s", &a);

    printf("Enter the second string :");
    scanf("%s", &b);

    while(a != '\0')
    {
        int c, n, m;
        printf("Which of these String Handling Functions You want to apply :\n1. String Concatenation\n2. String Copy\n3. String Compare\n4. String Length\n5. To exit the loop.\n");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                strcat(a, " ");
                strcat(a, b);
                printf("The Concatenated strings are : %s\n", a);
                break;
            case 2:
                strcpy(a,b);
                printf("The Copied strings are : %s\n", a);
                break;
            case 3:
                if (strcmp(a, b) == 0) 
                {
                    printf("Strings are equal\n");
                    //break;
                } else
                {
                    printf("Strings ain't equal\n");
                    //break;
                }
                break; // Either You write it 2 times after each statement or write at the last it works same
            
                // <0 : If str1 is lexicographically "smaller" than str2 (the first non-matching character in str1 has a lower ASCII value).
                // >0 : If str1 is lexicographically "greater" than str2
            case 4:
                n = strlen(a);
                m = strlen(b);
                printf("The length of the first string is : %d\n", n);
                printf("The length of the second string is : %d\n", m);
                break;
        }
        
        if(c == 5)
        {
            break;
        }
    }
    
    return 0;
}