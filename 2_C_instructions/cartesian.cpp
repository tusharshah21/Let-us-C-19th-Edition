// write a program to receive cartesian co-ordinates (X,Y) of a point and convert them into polar co-ordinates (r,q)

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, theta;
    printf("\nEnter x and y co-ordinates: ");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    theta = theta * 180 / 3.14; /* convert to degrees */
    printf("r = %f theta = %f\n", r, theta);
    return 0;
}