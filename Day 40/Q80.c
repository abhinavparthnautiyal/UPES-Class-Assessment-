/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/
#include <stdio.h>

void main()
{
    int m1, n1, m2, n2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    int a[m1][n1];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    int b[m2][n2], result[m1][n2];

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < n1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
