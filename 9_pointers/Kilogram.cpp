// Define a function that receives weight of a commodity in Kilograms
// and returns the equivalent weight in Grams, Tons and Pounds. Call
// this function from main( ) and print the results in main( ).

#include <stdio.h>
void convert(int kg, int *g, float *t, float *p)
{
    *g = kg * 1000;
    *t = kg / 1000.0;
    *p = kg * 2.20462;
}
int main()
{
    int kg, g;
    float t, p;
    printf("Enter weight in Kilograms: ");
    scanf("%d", &kg);
    convert(kg, &g, &t, &p);
    printf("Weight in Grams: %d\n", g);
    printf("Weight in Tons: %f\n", t);
    printf("Weight in Pounds: %f\n", p);
    return 0;
}

