#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int num =1;
    
    do
    {
        if (num==6|| num==8){
            num++;
            continue;
    //continue means once you hit the keyword continue start from the begning
    //what ever code comes after it ignores it start from first code.
    // So this code won't print 6 & 8 it will go like 1 to 5 and then 7 , 9 , 10
        }
        printf(" %d is available \n",num);
        num++;
    }while (num<=10);
    return 0;
}