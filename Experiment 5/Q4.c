/*4.	WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.*/
#include <stdio.h>
void main() 
{
    int m, n, p, q;
    int i, j, k;

    printf("Enter the order of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the order of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    printf("Enter elements of matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    if (n!=p) 
    {
        printf("\nMatrix multiplication not possible!");
        printf("\nNumber of columns of A (%d) != Number of rows of B (%d)\n", n, p);
    }
    else    
{
    int C[m][q]; 

    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;

    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            for (k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%5d", B[i][j]);
        printf("\n");
    }

    printf("\nResultant Matrix (A x B) (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%5d", C[i][j]);
        printf("\n");
    }
}

}
