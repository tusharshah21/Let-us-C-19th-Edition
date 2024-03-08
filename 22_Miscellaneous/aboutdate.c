// Write a program, which stores information about a date in a structure containing three members—day, month and year. 
// Using bit fields, the day number should get stored in first 5 bits of day, the
// month number in 4 bits of month and year in 12 bits of year. Write a program to read date of joining of 3 employees and display them in ascending order of year.

#include <stdio.h>
int main()
{
    struct date
    {
        unsigned day : 5;
        unsigned month : 4;
        unsigned year : 12;
    };
    struct date dt[3], temp;
    int i, j, d, m, y;
    printf("Enter joining dates (dd-mm-yyyy) of 10 employees\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &d, &m, &y);
        if (d < 1 || d > 31 || m < 1 || m > 12)
        {
            printf("Invalid date, enter new date\n");
            i--;
            continue;
        }
        dt[i].day = d;
        dt[i].month = m;
        dt[i].year = y;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (dt[j].year < dt[i].year)
            {
                temp = dt[i];
                dt[i] = dt[j];
                dt[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
        printf("%d %d %d\n", dt[i].day, dt[i].month, dt[i].year);
    return 0;
}