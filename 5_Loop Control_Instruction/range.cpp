// Write a program to find the range of a set of numbers. Range is the
// difference between the smallest and biggest number in the list.

#include <stdio.h>
int main(){
    int n,min,max,flag=0;
    printf("Enter the number of digits you wanna eneter: ");
    scanf("%d",&n);
    while(n>0)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(flag==0)
        {
            min=num;
            max=num;
            flag=1;
        }
        else
        {
            if(num<min)
                min=num;
            if(num>max)
                max=num;
        }
        n--;
    }
    printf("The range of the numbers is %d",max-min);
    return 0;
}