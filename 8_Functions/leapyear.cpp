// Any year is entered through the keyboard. Write a function to
// determine whether the year is a leap year or not. 

#include <stdio.h>
void leapyear(int year)
{
    if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapyear(year);
}