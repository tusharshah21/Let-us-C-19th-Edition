// For the following set of sample data, compute the standard
// deviation and the mean.

#include <stdio.h>
#include <math.h>
int main()
{
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, 2, 11, 10, 9, -10};
    float sum, xi, std, mean = 0;
    int i;
    int n = sizeof(data)/sizeof(data[0]);
    sum = 0;
    for (i = 0; i <= 14; i++)
        sum = sum + data[i];
    mean = sum / n;
    /* Calculate standard deviation */
    sum = 0;
    for (i = 0; i <= 14; i++)
        sum = sum + pow((data[i] - mean), 2);
    std = sqrt(sum) / n;
    for (i = 0; i <= 14; i++)
        printf("%d\t", data[i]);
    printf("\nMean = %f\n", mean);
    printf("Standard Deviation = %f\n", std);
    return 0;
}