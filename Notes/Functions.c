#include <stdio.h>
#include <stdlib.h>

//prototyping your function
void printsomething();

int main()
{
    printsomething();
    printsomething();
    printsomething();
    //copy and paste as many times you want it will print that piece of shit

    return 0;
}

void printsomething()
{
//when you don't want anything in return but you just want to do extra work you can use void

    printf("durr I'm a function \n");
    return ;
    // if you wrote here return 0; instead you will get in a very bad situation
}
