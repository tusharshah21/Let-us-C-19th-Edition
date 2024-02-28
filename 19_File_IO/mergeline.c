// Write a program that merges lines alternately from two files and
// writes the results to a new file. If one file has a smaller number of
// lines than the other, the remaining lines from the larger file should
// be simply copied into the target file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;
    char line[100];
    fp1 = fopen("source1.txt", "r");
    fp2 = fopen("source2.txt", "r");
    fp3 = fopen("target.txt", "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File opening error occurred\n");
        return 1;
    }
    while (1)
    {
        if (fgets(line, 100, fp1) != NULL)
            fputs(line, fp3);
        if (fgets(line, 100, fp2) != NULL)
            fputs(line, fp3);
        if (feof(fp1) && feof(fp2))
            break;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}