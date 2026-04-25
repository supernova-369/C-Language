#include <stdio.h>

int main()
{
    int x,z;

    printf("Enter the first value : ");
    scanf("%d",&x);

    printf("Enter the second value : ");
    scanf("%d",&z);

    printf("Ohh so you by mistake interchanged the value of x and z!, No problem you little brat.\n");

    void *ptr;
    int temp;
    //You can't do this without taking an extra temporary variable since void * can't store value
    //as void * has no size and no type.
    temp=x;
    ptr=&temp;
    x=z;
    z=*((int*)ptr);    

    printf("Numbers Swapped you stuuupid. Next time be careful. DO YOU UNDERSTAND?\n");
    printf("x = %d\n",x);
    printf("z = %d\n",z);


    return 0;
}

/*
Expression	|   What it works with	 |  What it does
ptr = &x	|   Address	             |  Makes pointer point to x
*ptr = x	|   Value	             |  Writes value of x somewhere
*ptr	    |   Value	             |  Accesses/modifies data
ptr	        |   Address	             |  Stores location
*/