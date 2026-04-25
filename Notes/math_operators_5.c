#include <stdio.h>

int main (){
    float age1, age2, age3, average;
    age1=age2=4.0;
    
    printf("Enter your age \n");
    scanf("%f", &age3);
    
    average = (age1 +age2+ age3)/3;
    printf("\nThe average age of the group is %f",average);
    
    return 0;
}
