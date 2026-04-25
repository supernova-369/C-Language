#include <stdio.h>

int main() {
    int avg;
    printf("What is your score? \n");
    scanf("%d", &avg);
    if (avg>=90){
        printf("Grade : A\n");
        printf("You study Bug");
    }else if (avg>=80){
        printf("Grade :B\n");
        printf("You can make it through");
    }else if (avg>=70){
        printf("Grade : C\n");
        printf("You Dumbo");
    }   else if (avg>=60){
        printf("Grade : D\n");
        printf("You should try content creation");
    }else {
        printf("You piece of shit!");
    }

    return 0;
}

	//In python it is elif here it is else if(){}