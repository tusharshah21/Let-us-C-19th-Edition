// Write a recursive function to obtain the running sum of first 25
// natural numbers.

#include<stdio.h>
int getsum(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    else
        return n+getsum(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d",n,getsum(n));
    return 0;
}