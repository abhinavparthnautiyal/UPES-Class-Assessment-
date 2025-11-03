/*Write a program to find the sum of two matrix (assume size 3x3).*/
#include <stdio.h>
void main() 
{
    int a[3][3], b[3][3], sum[3][3];
    int i, j;
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum of the two matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}
