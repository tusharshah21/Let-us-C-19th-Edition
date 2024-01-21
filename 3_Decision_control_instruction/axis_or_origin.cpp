// Given a point (x, y), write a program to find out if it lies on x-axis, yaxis or origin.

#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter the coordinates of point: ");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
        printf("\nPoint lies on origin\n");
    else if (x == 0)
        printf("\nPoint lies on y-axis\n");
    else if (y == 0)
        printf("\nPoint lies on x-axis\n");
    else
        printf("\nPoint lies neither on x-axis nor on y-axis\n");
    return 0;
}