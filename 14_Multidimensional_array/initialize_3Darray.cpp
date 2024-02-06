// How will you initialize a three-dimensional array threed[3][2][3]?
// How will you refer the first and last element in this array?

#include <stdint.h>
#include <stdio.h>
int main()
{
    int arr[][2][3] = {
        {{1, 2, 3},
         {4, 5, 6}},
        {{1, 2, 3},
         {4, 5, 6}},
        {{1, 2, 3},
         {4, 5, 6}}};
    printf("First element: %d\n", arr[0][0][0]);
    return 0;
}