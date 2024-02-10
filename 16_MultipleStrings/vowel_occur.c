// Write a program to count the number of occurrences of any two
// vowels in succession in a line of text. For example, in the sentence
// “Please read this application and give me gratuity”
// such occurrences are ea, ea, ui.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    char *s;
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    s = str;
    while (*s)
    {
        if ((*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') && (*(s + 1) == 'a' || *(s + 1) == 'e' || *(s + 1) == 'i' || *(s + 1) == 'o' || *(s + 1) == 'u' || *(s + 1) == 'A' || *(s + 1) == 'E' || *(s + 1) == 'I' || *(s + 1) == 'O' || *(s + 1) == 'U'))
        {
            count++;
        }
        s++;
    }
    printf("\nNumber of occurrences of any two vowels in succession: %d", count);
    return 0;
}