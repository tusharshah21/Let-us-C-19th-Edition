// Write a program to receive an unsigned 16-bit integer and then
// exchange the contents of its two bytes using bitwise operators.

#include <stdio.h>
void showbits(unsigned int);
int main()
{
    unsigned short int num,leftbyte,rightbyte,newnum;
    printf("Enter the number: ");
    scanf("%d", &num);
    showbits(num);
    leftbyte = (num &0xFF00)>>8;
    rightbyte = num &0x00FF;
    newnum= (rightbyte<<8)|leftbyte;
    printf("The exchanged number is: %d\n",newnum);
    return 0;
}

void showbits(unsigned int n)
{
    int i;
    unsigned int j, k, andmask;
    for (i = 15; i >= 0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
    printf("\n");
}