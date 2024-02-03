// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, how
// many are negative, how many are even and how many odd.

#include<stdio.h>
int main()
{
    int arr[]={1,3,5,7,2,4,6,1-1,-3,-5,-7,-2,-4,-6,-8,11,12,13,-11,-12,-13,89,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    int pos=0,neg=0,even=0,odd=0;
    for(int i=0;i<size;i++)
    {
        arr[i]>0?pos++:neg++;
        arr[i]%2==0?even++:odd++;
    }
    printf("Positive = %d\n",pos);
    printf("Negative = %d\n",neg);
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);

    return 0;
}