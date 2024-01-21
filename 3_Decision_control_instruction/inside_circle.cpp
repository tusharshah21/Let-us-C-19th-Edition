// Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, r, d;
    printf("\nEnter the coordinates of center of circle: ");
    scanf("%d%d", &x, &y);
    printf("\nEnter the radius of circle: ");
    scanf("%d", &r);
    printf("\nEnter the coordinates of point: ");
    scanf("%d%d", &x, &y);
    d = sqrt(pow((x - x), 2) + pow((y - y), 2));
    if (d == r)
        printf("\nPoint lies on the circle\n");
    else if (d < r)
        printf("\nPoint lies inside the circle\n");
    else
        printf("\nPoint lies outside the circle\n");
    return 0;
}