// Write a program to copy contents of one file to another. While
// doing so replace all lowercase characters to their equivalent
// uppercase characters.

#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("source.txt", "r");
    fp2 = fopen("target.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File opening error occurred\n");
        return 1;
    }
    while (1)
    {
        ch = fgetc(fp1);
        if (ch == EOF)
            break;
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}