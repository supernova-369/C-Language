#include <stdio.h>

int main()
{
    float distance,time;
    printf("How much distance did car travel ?\n");
    scanf("%f",&distance);

    printf("How much time taken(in hrs) by the car to travel %.2f ?\n",distance);
    scanf("%f", &time);

    float speed = distance/time ;
    printf("The car was travelling at an avg speed %.2f kmph.",speed);

    return 0;
}