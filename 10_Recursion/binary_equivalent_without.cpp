// A positive integer is entered through the keyboard, write a function
// to find the binary equivalent of this number:
// (1) Without using recursion
// (2) Using recursion

#include <stdio.h>
#include <math.h>

int binary(int n)
{
    int r;
    r = n % 2;
    n = n / 2;
    if (n == 0)
    {
        printf("\nThe binary equivalent is %d", r);
        return (r);
    }
    else
        binary(n); /* Recursive call */
    printf("%d", r);
}

int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    binary(num); /* Function call */
    return 0;
}
