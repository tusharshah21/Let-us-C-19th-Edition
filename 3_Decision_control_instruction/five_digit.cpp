// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not.

#include <stdio.h>
int main()
{
    int num, rev = 0, temp, rem;
    printf("\nEnter a five digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("\nReversed number = %d\n", rev);
    if (num == rev)
        printf("\n Given no. %d & its reversed number are equal\\n", num);
    else
        printf("\nGiven no. %d & its reversed number are not equal\n", num);
    return 0;
}
