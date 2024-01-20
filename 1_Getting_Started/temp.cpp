#include <stdio.h>

int main()
{
    int farh;
    printf("Enter temperature in fahrenheit");
    scanf("%d", &farh);
    // printf("Hello World");
    int cel = (farh - 32) * 5 / 9;
    printf("Temperature in celsius is %d", cel);
    return 0;
}