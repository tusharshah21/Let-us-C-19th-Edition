// Define a function to compute the distance between two points and
// use it to develop another function that will compute the area of the
// triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
// these functions to develop a function which returns a value 1 if the
// point (x, y) lines inside the triangle ABC, otherwise returns a value
// 0. Would you get any advantage if you develop these functions to
// work on call be reference principle?

#include <stdio.h>
#include <math.h>
int distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a = distance(x1, y1, x2, y2);
    int b = distance(x2, y2, x3, y3);
    int c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int inside(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a = area(x1, y1, x2, y2, x3, y3);
    float a1 = area(x, y, x2, y2, x3, y3);
    float a2 = area(x1, y1, x, y, x3, y3);
    float a3 = area(x1, y1, x2, y2, x, y);
    return a == a1 + a2 + a3;
}
int main()
{
    int x, y, x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of point: ");
    scanf("%d %d", &x, &y);
    printf("Enter coordinates of triangle: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (inside(x, y, x1, y1, x2, y2, x3, y3))
        printf("Point lies inside triangle\n");
    else
        printf("Point does not lie inside triangle\n");
    return 0;
}