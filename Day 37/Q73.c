/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include <stdio.h>
void main()
{
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        rowSums[i] = 0; 
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; 
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) 
    {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
}