// Write macro definitions with arguments for calculation of Simple
// Interest and Amount. Store these macro definitions in a file
// “interest.h”. Include this file in your program, and use the macro
// definitions for calculating Simple Interest and Amount.

#define SI( p, n, r ) ( p * n * r / 100 )
#define AMT( p, SI ) ( p + SI )