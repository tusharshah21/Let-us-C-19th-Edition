// Write a program to print 24 hours of day with suitable suffixes like
// AM, PM, Noon and Midnight.

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 24; i++)
    {
        if (i == 12)
            printf("%d Noon\n", i);
        else if (i == 24)
            printf("%d Midnight\n", i);
        else if (i > 12)
            printf("%d PM\n", i - 12);
        else
            printf("%d AM\n", i);
    }
    return 0;
}