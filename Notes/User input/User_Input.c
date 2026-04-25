#include <stdio.h>

int main(){
    char firstname[20];
    char crush[20];
    int numberofbabies;
    
    printf("what is your name?\n");
    scanf("%s", firstname);// Input of user will be stored in variable firstname
    printf("who are you going to marry?\n");
    scanf("%s", crush);
    
    printf("How many kids will you have ?\n");
    scanf("%d", &numberofbabies); //you need to use andpercent& symbol before every single variable. variables like (float, int.string)
    printf("%s and %s are in love and will have %d babies", firstname, crush, numberofbabies);
    return 0;
}
    /* Scanf is like pausing your code and wait for your response.  if you add space in any of this input it will count it as end of the string. In order to do that you should add 2 different variables.
    */