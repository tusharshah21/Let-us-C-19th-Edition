// For the following set of n data points (x, y), compute the correlation
// coefficient r

#include <stdio.h>
#include <math.h>
int main()
{
    int n = 11, i, j;
    float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float r;
    float sx = 0.0, sxy = 0.0, sy = 0.0, sxs = 0.0, sys = 0.0;
    float r1, r2;
    for (i = 0; i <= 10; i++)
    {
        sx = sx + x[i];          /* Summation of X */
        sxy = sxy + x[i] * y[i]; /* Summation of XY */
        sy = sy + y[i];          /* Summation of Y */
        sxs = sxs + x[i] * x[i]; /* Summation of square of X */
        sys = sys + y[i] * y[i]; /* Summation of square of Y */
    }
    printf("\n\n%c X = %.2f\n", 228, sx);
    printf("%c Y = %.2f\n", 228, sy);
    printf("%c XY = %.2f\n", 228, sxy);
    printf("%c X*X = %.2f\n", 228, sxs);
    printf("%c Y*Y = %.2f\n", 228, sys);
    r1 = (sxy - sx * sy);
    r2 = (sqrt((n * sxs - sx * sx) * (n * sys - sy * sy)));
    r = r1 / r2;
    printf("\n\n( Numerator ) r1 = %f\n", r1);
    printf("( Denominator) r2 = %f\n", r2);
    printf("Corelation coefficient r1/r2 = %f\n", r);
    return 0;
}