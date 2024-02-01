//  Write macro definitions for the following:
// 1. To find arithmetic mean of two numbers.
// 2. To find absolute value of a number.
// 3. To convert an uppercase alphabet to lowercase.
// 4. To obtain the bigger of two numbers.

#include <stdio.h>
#define MEAN(a,b) ((a+b)/2)
#define ABS(a) ((a>0)?a:-a)
#define TOLOWER(a) ((a>='A' && a<='Z')?a+32:a)
#define BIGGER(a,b) (a>=b?a:b)
int main() {
    int a,b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Mean of %d and %d is %d\n",a,b,MEAN(a,b));
    printf("Absolute value of %d is %d\n",a,ABS(a));
    printf("Enter an uppercase alphabet: ");
    scanf(" %c",&c);
    printf("Lowercase of %c is %c\n",c,TOLOWER(c));
    printf("Bigger of %d and %d is %d\n",a,b,BIGGER(a,b));
    return 0;
}
