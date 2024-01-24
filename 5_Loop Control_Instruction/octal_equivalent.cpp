// Write a program to receive an integer and find its octal equivalent.
// Hint: To obtain octal equivalent of an integer, divide it continuously
// by 8 till dividend doesn’t become zero, then write the remainders
// obtained in reverse direction.

#include <stdio.h>
int main()
{
    int n1,n2,rem,oct,p;
    printf("Enter any number: ");
    scanf("%d",&n1);
    n2=n1;
    oct=0;
    p=1;
    while(n1>0)
    {
        rem=n1%8;
        oct=oct+rem*p;
        p=p*10;
        n1=n1/8;
    }
    printf("The octal equivalent of %d is %d",n2,oct);
    return 0;
}