//  If ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three

#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("\nEnter the ages of Ram, Shyam and Ajay: ");
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if (ram < shyam && ram < ajay)
        printf("\nRam is youngest\n");
    else if (shyam < ram && shyam < ajay)
        printf("\nShyam is youngest\n");
    else
        printf("\nAjay is youngest\n");
    return 0;
}