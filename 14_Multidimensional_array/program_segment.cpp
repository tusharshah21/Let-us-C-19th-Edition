// Match the following with reference to the following program
// segment:
// int i, j, = 25 ;
// int *pi, *pj = & j ;
// *pj = j + 5 ;
// j = *pj + 5 ;
// pj = pj ;
// *pi = i + j ;
// Each integer quantity occupies 2 bytes of memory. The value
// assigned to i begins at (hexadecimal) address F9C and the value
// assigned to j begins at address F9E. Match the value represented by
// expressions in the left column with values in the right column.

// 1. &i a. 30
// 2. &j b. F9E
// 3. pj c. 35
// 4. *pj d. FA2
// 5. i e. F9C
// 6. pi f. 67
// 7. *pi g. unspecified
// 8. ( pi + 2 ) h. 65
// 9. (*pi + 2) i. F9E
// 10. * ( pi + 2 ) j. F9E
// k. FAO
// l. F9D

#include<stdio.h>
int main(){
    int i, j = 25;
    // int *x=&i;
    int *pi, *pj = & j ;
    *pj = j + 5 ;    
    j = *pj + 5 ;
    pj = pj ;
    *pi = i + j ;
    printf("i: %d\n", i);
    printf("j: %d\n", pi);
    printf("pi: %d\n", *pi);
    printf("pj: %d\n", *pj);
    printf("pi + 2: %d\n", *(pi + 2));
    printf("(*pi + 2): %d\n", (*pi + 2));
    printf("*(pi + 2): %d\n", *(pi + 2));
    return 0;
}