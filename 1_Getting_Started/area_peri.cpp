#include <stdio.h>

int main()
{
    int l, b, rad;
    printf("Enter length and breadth of rectangle");
    scanf("%d %d", &l, &b);
    printf("Enter radius of circle");
    scanf("%d", &rad);
    int area = l * b;
    int peri = 2 * (l + b);
    float area_c = 3.14 * rad * rad;
    float peri_c = 2 * 3.14 * rad;
    printf("Area of rectangle is %d\n", area);
    printf("Perimeter of rectangle is %d\n", peri);
    printf("Area of circle is %f\n", area_c);
    printf("Perimeter of circle is %f\n", peri_c);
    
    return 0;
}