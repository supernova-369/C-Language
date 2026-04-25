#include <stdio.h>
#include <stdlib.h>

int calculatebonus(int yearsworked);

int main(){
    
    int buckysbonus = calculatebonus(14);
    int emmabonus = calculatebonus(4);
    printf("bucky gets $%d \n", buckysbonus);
    printf("emma gets $%d \n", emmabonus);
    
/* 	
    Or
    printf("bucky gets $%d \n", buckysbonus(14));
    printf("emma gets $%d \n", emmabonus(4));
    if you wouldn't have created 2 extra functions and instead write this would have given the same result
*/
    
	return 0;
}

int calculatebonus(int yearsworked)//instead of void you entered what type of data you want
{
    int bonus= yearsworked *250;
    if (yearsworked >10){
        bonus+= 1000;
    }
    return bonus;
}