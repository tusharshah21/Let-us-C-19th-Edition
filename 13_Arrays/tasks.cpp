// Write a program which performs the following tasks:
// − initialize an integer array of 10 elements in main( )
// − pass the entire array to a function modify( )
// − in modify( ) multiply each element of array by 3
// − return the control to main( ) and print the new array elements
// in main( )

#include <stdio.h>
void modify(int arr[], int n);
int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    printf("Elements before modification:\n");
    for (int i = 0; i < 9; i++)
        printf("%d\t", arr[i]);
    modify(arr, 10);
    printf("\n\nModified Array is: \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}

void modify(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *arr = *arr * 3;
        arr++;
    }
}