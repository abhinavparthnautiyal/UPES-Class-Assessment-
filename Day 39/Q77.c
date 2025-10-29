/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/
#include <stdio.h>
void main() 
{
    int m, n, i, j, k, isDistinct = 1;
    int matrix[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m != n) 
    {
        printf("Matrix is not square — diagonal check not possible.\n");
    }
   else{
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
        for (k = i + 1; k < n; k++) 
        {
            if (matrix[i][i] == matrix[k][k]) 
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

}
}