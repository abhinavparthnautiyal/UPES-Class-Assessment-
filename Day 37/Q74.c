/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include <stdio.h>
void main() 
{
    int m, n, i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[m][n];
   
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}
