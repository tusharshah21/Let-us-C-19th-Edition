// Write a program to read and store information about insurance policy holder.
// The information contains details like gender, whether the holder is minor/major,
// policy name and duration of the policy. Make use of bit-fields to store this information.

#include <stdio.h>
#include <string.h>
int main()
{
    struct insurance
    {
        unsigned gender : 1;
        unsigned status : 1;
        char name[20];
        unsigned dr : 8;
    };
    struct insurance i;
    int g, s, d;
    char n[20];
    printf("\nEnter gender (0-Male, 1-Female): ");
    scanf("%d", &g);
    printf("\nEnter status (0-Minor, 1-Major): ");
    scanf("%d", &s);
    printf("\nEnter name of the policy holder: ");
    scanf("%s", n);
    printf("\nEnter duration (1 to 25 yrs) of the policy: ");
    scanf("%d", &d);
    i.gender = g;
    i.status = s;
    strcpy(i.name, n);
    i.dr = d;
    printf("Name: %s\n", i.name);
    printf("Gender: %s\n", i.gender == 0 ? "Male" : "Female");
    printf("Status: %s\n", i.status == 0 ? "Minor" : "Major");
    printf("Duration %d\n", i.dr);
    return 0;
}