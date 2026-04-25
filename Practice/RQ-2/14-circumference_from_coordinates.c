#include <stdio.h>
#include <math.h>
#define pi 3.14159

//since void distance doesn't returns anything like return d so just have to change the function
//void distance()
int main()
{
    float x1, y1, x2, y2;
    float a, b, c, d;

    printf("Enter the first coordinates (x1, y1):\n");
    scanf("%f %f", &x1, &y1);

    printf("Enter the second coordinates (x2, y2):\n");
    scanf("%f %f", &x2, &y2);

    a = pow((x2 - x1), 2);
    b = pow((y2 - y1), 2);
    c = a + b;
    d = sqrt(c);

    printf("The distance between these two points is %.2f\n", d);

    float area = pi*d*d;
    float perimeter=2*pi*d;

    printf("The area of the this circle is %.2f\n",area);
    printf("The Cicumference of this circle is %.2f",perimeter);

    return 0;
}