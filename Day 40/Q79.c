/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

void main()
{
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (int k = 0; k < m; k++)
    {
        i = k;
        j = 0;
        while (i >= 0 && j < n)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    for (int k = 1; k < n; k++)
    {
        i = m - 1;
        j = k;
        while (i >= 0 && j < n)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }
}
