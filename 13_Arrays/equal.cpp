//  If an array arr contains n elements, then write a program to check if
// arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.

#include<stdio.h>
int main()
{
    int arr[10];
    printf("\n Enter 10 elements of array:\n");
    for(int i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<=4;i++)
    {
        printf(" %d and %d are ",arr[i],arr[10-(i+1)]);
        if(arr[i]==arr[10-(i+1)])
            printf("Equal\n");
        else
            printf("Unequal\n");
    }
    
}