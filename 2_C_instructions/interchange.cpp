// Two numbers are input through the keyboard into two locations C
// and D. Write a program to interchange the contents of C and D

#include <stdio.h>
int main()
{
    int c, d, e;
    printf("\nEnter the number at location C: ");
    scanf("%d", &c);
    printf("\nEnter the number at location D: ");
    scanf("%d", &d);
    e = c;
    c = d;
    d = e;
    printf("New Number at location C = %d\n", c);
    printf("New Number at location D = %d\n", d);
    return 0;
}