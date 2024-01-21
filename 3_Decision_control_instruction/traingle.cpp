//Write a program to check whether a triangle is valid or not, 
//if three angles of the triangle are entered through the keyboard. 
//A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the three angles of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 180)
        printf("\nTriangle is valid\n");
    else
        printf("\nTriangle is not valid\n");
    return 0;
}