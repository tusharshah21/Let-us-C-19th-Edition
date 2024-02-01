// Write macro definitions with arguments for calculation of Simple
// Interest and Amount. Store these macro definitions in a file
// “interest.h”. Include this file in your program, and use the macro
// definitions for calculating Simple Interest and Amount.

#include <stdio.h>
#include "interest.h"
int main() {
    float p,r,t;
    printf("Enter principal, rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    float si=SI(p,r,t);
    printf("Simple Interest = %f\n",si);
    printf("Amount = %f\n",AMT(p,si));
    return 0;
}