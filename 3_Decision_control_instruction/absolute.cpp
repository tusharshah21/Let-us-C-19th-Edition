//Write a program to find the absolute value of a number entered through the keyboard.

#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = num*-1;
    printf("\nAbsolute value = %d\n", num);
    return 0;
}