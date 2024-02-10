// Write a program that will read a line and delete from it all
// occurrences of the word ‘the’.

#include<stdio.h>
#include<string.h>

int main(){
    char str[80],str1[80];
    char *s,*p;
    printf("Enter a string: ");
    gets(str);
    s=str;
    p=str1;
    while(*s)
    {
        if(*s=='t' && *(s+1)=='h' && *(s+2)=='e' && (*(s+3)==' ' || *(s+3)=='\0'))
        {
            s+=4;
        }
        else
            *p++ = *s++;
    }
    *p='\0';
    printf("\nString after deleting 'the' :");
    puts(str1);
    return 0;
}