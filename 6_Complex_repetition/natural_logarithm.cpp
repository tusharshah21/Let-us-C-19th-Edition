// //The natural logarithm can be approximated by the following series.
// If x is input through the keyboard, write a program to calculate the
// sum of first seven terms of this series.

#include<stdio.h>
#include<math.h>
int main()
{
    float x,sum=0;
    int i;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    for(i=1;i<=7;i++)
    {
        if (i==1)
            sum += (x-1)/x;
        else
        sum += 0.5*pow(((x-1)/x),i);
    }
    printf("The sum of the series is %f",sum);
    return 0;
}
