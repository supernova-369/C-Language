#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Which table you don't know you dum'ass?\n");
    scanf(" %d", &a);

    printf("The table of %d for your kid is here :\n",a);
    for(int i=1;i<=10;i++){
        int b=a*i;
        printf("%d x %d = %d \n",a,i,b);
    }
    return 0;
}