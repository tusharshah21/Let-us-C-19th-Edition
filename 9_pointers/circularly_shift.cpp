// Given three variables x, y, z write a function to circularly shift their
// values to right. In other words, if x = 5, y = 8, z = 10, after circular
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
// circularly shift values.

#include <stdio.h>
void circularly_shift(int *x, int *y, int *z)
{
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}
int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    circularly_shift(&x, &y, &z);
    printf("After circular shift: %d %d %d\n", x, y, z);
    return 0;
}