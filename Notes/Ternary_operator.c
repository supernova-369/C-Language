#include <stdio.h>

int main() {
    char lastname[20];
    printf("Enter your last name:\n");
    scanf(" %s", lastname);

    (lastname[0] < 'M') ? printf("Blue Team") : printf("Red Team");
   
    return 0;
}
/*
M=77
m=109
A<B<C
it will only see first alphabet of the name
*/
//Conditional (Ternary) Operator: A shorthand for if-else statements.
? : (e.g., condition ? expression1 : expression2)

//expression1 is if and expression 2 is else 



// Ternary must always be: condition ? expr1 : expr2
/*
printf("%s",
    (age >= 18) ? "Adult" :
    (age >= 13) ? "Teen" :
    (age >= 5)  ? "Kid"  :
                  "Toddler"
);
*/