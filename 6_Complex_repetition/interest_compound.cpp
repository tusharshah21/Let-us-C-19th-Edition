// When interest compounds q times per year at an annual rate of r %
// for n years, the principal p compounds to an amount a as per the
// following formula
// a = p ( 1 + r / q ) ^nq
// Write a program to read 10 sets of p, r, n & q and calculate the
// corresponding as.

#include<stdio.h>
#include<math.h>
int main()
{
    float p,q,r,n,a;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the value of p, q, r, n: ");
        scanf("%f %f %f %f",&p,&q,&r,&n);
        a = p * pow((1 + r / q), (n * q));
        printf("The amount is %f\n",a);
    }
}