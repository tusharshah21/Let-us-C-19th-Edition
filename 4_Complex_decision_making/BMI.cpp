// The Body Mass Index (BMI) is defined as ratio of the weight of a
// person (in kilograms) to the square of the height (in meters). Write
// a program that receives weight and height, calculates the BMI, and
// reports the BMI category as per the following table:
// BMI Category
// Starvation if BMI < 15
// Anorexic if 15 <= BMI < 17.5
// Underweight if 17.5 <= BMI < 18.5
// Ideal if 18.5 <= BMI < 25.0
// Overweight if 25.0 <= BMI < 30
// Obese if 30.0 <= BMI

#include <stdio.h>
#include <math.h>
int main()
{
    float wt, ht, bmi;
    printf("Enter weight in kg and height in meters: ");
    scanf("%f %f", &wt, &ht);
    bmi = wt / (ht * ht);
    printf("Body Mass Index = %f\n", bmi);
    if (bmi < 15)
        printf("BMI Category: Starvation\n");
    else if (bmi < 17.5)
        printf("BMI Category: Anorexic\n");
    else if (bmi < 18.5)
        printf("BMI Category: Underweight\n");
    else if (bmi < 25)
        printf("BMI Category: Ideal\n");
    else if (bmi < 30)
        printf("BMI Category: Overweight\n");
    else if (bmi < 40)
        printf("BMI Category: Obese\n");
    else
        printf("BMI Category: Morbidly Obese\n");
    return 0;
}