//program to convert the temperature given in Celsius into equivalent Fahrenheit
#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter the celcius temperature\n");
    scanf("%f",&c);
    //celsius to fahrenheit conversion formula
    f = c * 9 / 5 + 32 ;
    printf("The Fahrenheit temperature is %.3f\n",f);
    return 0;
}
