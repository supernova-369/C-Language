#include <stdio.h>

int main() {
    int a= 4+2 *6;
    printf("Result : %d \n",a);
    /* since multiplication and division comes first then addition & subtraction*/
    a=(4+2)*6;
    printf("Result : %d \n",a);
    /*paranthesis forces it to first solve the equation in it */
    return 0;
}