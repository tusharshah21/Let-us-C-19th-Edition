// Write a program using pointers to find the smallest number in an
// array of 25 integers.

#include<stdio.h>
int main()
{
    int n,arr[25],i,j;
    printf("Enter 25 elements in the array: ");
    for(i=0;i<25;i++)
        scanf("%d",&arr[i]);
    n=*arr;
    for(i=0;i<25;i++)
    {
        if(*(arr+i)<n)
            n=*(arr+i);
    }
    printf("Smallest number in the array is: %d",n);
}