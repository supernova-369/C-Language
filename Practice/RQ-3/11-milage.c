#include <stdio.h>

int main()
{
    float distance, fuel, mileage;
    printf("How much the distance is travelled by your vehicle?\n");
    scanf("%f",&distance);

    printf("How much did the fuel consumed(in liters) by your vehicle?\n");
    scanf("%f",&fuel);

    if (fuel<=0){
        printf("Oh come on don't make fool of yourself.");
        return 1;
    }

    mileage=distance/fuel;

    printf("Mileage of your vehicle is %.2f km/l\n", mileage);
    return 0;
}