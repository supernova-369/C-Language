#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int a;
    int howMany;
    int maxAmount=10;
    
    printf("How many times do you want this looop to loooop?(upto 10)");
    scanf("%d", &howMany);
    for (a=1; a<=maxAmount; a++)
    //for (a=1; a<=maxAmount; a++); --> this semicolon immediately ends the loop
    {
        printf("%d \n",a);
        if (a==howMany)
        {
            break;
        }
    }
    return 0;
}
//here if you entered a no. > 10 then  it will print till 10