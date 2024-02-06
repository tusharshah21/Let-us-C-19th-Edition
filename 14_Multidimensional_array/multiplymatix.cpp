// Write a program to multiply any two 3 x 3 matrices.

#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    printf("Enter the elements of the first 3 x 3 matrix: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second 3 x 3 matrix: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = 0;
            for(k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the two 3 x 3 matrices is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}