#include <stdio.h>
#include <stdlib.h>

void printsomething();
int warts=23;//Global Variable
int main()
{
    // int warts=23;-->Local Variable but if you write this shit here it will be pain in ass because int main will think this only belongs to it and printsomething will not be able to use this shit
    printf("I have %d warts\n", warts);
    printsomething();
    return 0;
}
 void printsomething(){
     printf("I have %d warts\n", warts);
     return;
 }