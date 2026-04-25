// #include <stdio.h>

// int main()
// {
//     float a,b,c,x;

//     printf("Enter a : ");
//     scanf(" %f", &a);

//     printf("Enter b : ");
//     scanf(" %f",&b);

//     printf("Enter c : ");
//     scanf(" %f", &c);

//     x=a/(b-c);
//     printf(" %f", x);

//     return 0;
// }


#include <stdio.h>

int main()
{
    int a, b, c;
    float x;

    /* Case (a) */
    a = 250; 
    b = 85; 
    c = 25;
    x = (float)a / b - c;
    printf("Case (a): x = %.2f\n", x);

    /* Case (b) */
    a = 300; 
    b = 70; 
    c = 70;
    x = (float)a / b - c;
    printf("Case (b): x = %.2f\n", x);

    return 0;
}
