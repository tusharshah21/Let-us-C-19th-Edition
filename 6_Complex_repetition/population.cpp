// Population of a town today is 100000. The population has increased
// steadily at the rate of 10% per year for last 10 years. Write a
// program to determine the population at the end of each year in the
// last decade.

#include<stdio.h>
int main()
{
    int pop=100000;
    for(int i=0; i<10; i++)
    {
        pop = pop + (pop*0.1);
        printf("Population at the end of year %d is %d\n",i+1,pop);
    }
    return 0;
}