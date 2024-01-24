// Write a program which to find the grace marks for a student using
// switch. The user should enter the class obtained by the student and
// the number of subjects he has failed in. Use the following logic:

// − If the student gets first class and he fails in more than 3
// subjects, he does not get any grace. Otherwise, he gets a grace of 5 marks per subject.
// - If the student gets second class and he fails in more than 2
// subjects, he does not get any grace. Otherwise, he gets a grace of 4 marks per subject.
// − If the student gets third class and he fails in more than 1
// subject, then he does not get any grace. Otherwise, he gets a grace of 5 marks.

#include <stdio.h>
int main()
{
    int clas, failed;
    printf("Enter the class obtained by the student: ");
    scanf("%d", &clas);
    printf("Enter the number of subjects failed by the student: ");
    scanf("%d", &failed);
    switch (clas)
    {
    case 1:
        if (failed > 3)
            printf("No grace marks\n");
        else
            printf("Grace marks: %d\n", failed * 5);
        break;
    case 2:
        if (failed > 2)
            printf("No grace marks\n");
        else
            printf("Grace marks: %d\n", failed * 4);
        break;
    case 3:
        if (failed > 1)
            printf("No grace marks\n");
        else
            printf("Grace marks: %d\n", failed * 5);
        break;
    default:
        printf("Invalid class\n");
    }
    return 0;
}