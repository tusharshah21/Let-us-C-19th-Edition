// Write a program to enter numbers till the user wants. At the end it
// should display the count of positive, negative and zeros entered.

#include <stdio.h>
int main()
{
    int num, pos = 0, neg = 0, zero = 0;
    char ans='Y';
    while(ans=='Y'||ans=='y')
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num==0)
            zero++;
        else if(num>0)
            pos++;
        else
            neg++;
        printf("Do you want to continue (Y/N) : ");
        scanf(" %c",&ans);
    }
    printf ( "You entered %d positive number(s)\n", pos ) ;
    printf ( "You entered %d negative number(s)\n", neg ) ;
    printf ( "You entered %d zero(s)\n", zero ) ;
    return 0;
}