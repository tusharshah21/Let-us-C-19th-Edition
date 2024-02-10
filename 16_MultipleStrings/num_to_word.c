// Write a program that receives an integer (less than or equal to nine
// digits in length) and prints out the number in words. For example, if
// the number input is 12342, then the output should be Twelve
// Thousand Three Hundred Forty Two.

#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    char *s;
    printf("Enter a number: ");
    gets(str);
    s = str;
    while(*s)
    {
        if(*s=='1')
        {
            printf("One ");
        }
        else if(*s=='2')
        {
            printf("Two ");
        }
        else if(*s=='3')
        {
            printf("Three ");
        }
        else if(*s=='4')
        {
            printf("Four ");
        }
        else if(*s=='5')
        {
            printf("Five ");
        }
        else if(*s=='6')
        {
            printf("Six ");
        }
        else if(*s=='7')
        {
            printf("Seven ");
        }
        else if(*s=='8')
        {
            printf("Eight ");
        }
        else if(*s=='9')
        {
            printf("Nine ");
        }
        s++;
    }
    return 0;
}