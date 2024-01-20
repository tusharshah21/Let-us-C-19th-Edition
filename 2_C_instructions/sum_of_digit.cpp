#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}