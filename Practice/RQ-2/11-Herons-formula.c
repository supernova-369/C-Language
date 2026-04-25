#include <stdio.h>
#include <math.h>

int main()
{
    float A=0,a,b,c,s;
    printf("As You Know a, b, c are the sides of triangle so enter the lengths as your wish!\n");

    printf("Enter side a: ");
    scanf("%f",&a);

    printf("Enter side b: ");
    scanf("%f",&b);

    printf("Enter side c: ");
    scanf("%f",&c);    

    s=(a+b+c)/2;
    printf("The Area of the triangle of the given sides is %.2f\n", s);
    
    // Check if the sides form a valid triangle (Triangle Inequality Theorem)
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the area using Heron's formula
        A = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is %.2f square units.\n", A);
    } else {
        printf("Error: The entered side lengths do not form a valid triangle.\n");
    }

    return 0;
}