//Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.

#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("\nEnter the length and breadth of the rectangle: ");
    scanf("%d%d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
        printf("\nArea of rectangle is greater than its perimeter\n");
    else
        printf("\nArea of rectangle is not greater than its perimeter\n");
    return 0;
}
