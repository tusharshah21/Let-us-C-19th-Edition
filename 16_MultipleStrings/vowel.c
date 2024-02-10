// Write a program to delete all vowels from a sentence. Assume that
// the sentence is not more than 80 characters long.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[80],str1[80];
    char *s,*p;
    printf("Enter a string: ");
    gets(str);
    s=str;
    p=str1;
    while(*s)
    {
        if(*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u' || *s=='A' || *s=='E' || *s=='I' || *s=='O' || *s=='U')
        {
            s++;
        }
        else
            *p++ = *s++;
    }
    *p='\0';
    printf("\nString after deleting vowels :");
    puts(str1);
    return 0;
}