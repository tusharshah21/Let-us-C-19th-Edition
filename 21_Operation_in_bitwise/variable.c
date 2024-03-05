// Write a program to scan an 8-bit number into a variable and check
// whether its 3rd, 6th and 7th bit is on.

#include <stdio.h>
#define _BV(x)(1<<x)
void showbits(unsigned char);
int main()
{
    unsigned char a;
    unsigned int num;
    printf("Enter the number: ");
    scanf("%c", &num);
    num&=0x00FF;
    a=num;
    showbits(num);
    if((a&_BV(3))==_BV(3))
        printf("3rd bit is on\n");
    else
        printf("3rd bit is off\n");
    if((a&_BV(6))==_BV(6))
        printf("6th bit is on\n");
    else
        printf("6th bit is off\n");
    if((a&_BV(7))==_BV(7))
        printf("7th bit is on\n");
    else
        printf("7th bit is off\n");
    return 0;
}
void showbits(unsigned char n)
{
    int i;
    unsigned char j,k,andmask;
    for(i=7;i>=0;i--)
    {
        j=i;
        andmask=1<<j;
        k=n&andmask;
        k==0?printf("0"):printf("1");
    }
    printf("\n");
}