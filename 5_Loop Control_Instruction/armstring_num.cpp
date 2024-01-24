// Write a program to print out all Armstrong numbers between 1 and
// 500. If sum of cubes of each digit of the number is equal to the
// number itself, then the number is called an Armstrong number. For
// example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

#include <stdio.h>
int main()
{
    int i=1,a,b,c;
    printf("Armstrong num between 1 and 500 : ");
    while(i<=500)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        if(i==(a*a*a)+(b*b*b)+(c*c*c))
        {
            printf("%d ",i);
        }
        i++;
    }
}