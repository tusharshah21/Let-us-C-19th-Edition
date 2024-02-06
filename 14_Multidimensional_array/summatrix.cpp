// Write a program to add two 6 x 6 matrices


#include<stdio.h>
int main(){
    int a[6][6], b[6][6], c[6][6];
    int i, j;
    printf("Enter the elements of the first 6 x 6 matrix: \n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second 6 x 6 matrix: \n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of the two 6 x 6 matrices is: \n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}