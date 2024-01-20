/* Wind-chill factor is the felt air temperature on exposed skin due to
wind. The wind-chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v^0.16

where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind-chill factor*/

#include <stdio.h>
#include <math.h>
int main()
{
    float temp, vel, wcf;
    printf("\nEnter values of temp and velocity: ");
    scanf("%f %f", &temp, &vel);
    wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(vel, 0.16f);
    printf("Wind Chill Factor = %f\n", wcf);
    return 0;
}