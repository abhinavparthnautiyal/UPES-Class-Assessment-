/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/
#include <stdio.h>
void main()
{
    int m, n, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m != n)
    {
        printf("Matrix is not square — main diagonal sum not possible.\n");
        return;
    }

    int matrix[m][n];

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
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);
}
