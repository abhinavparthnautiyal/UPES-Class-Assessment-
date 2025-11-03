/*Write a C program that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.*/
#include <stdio.h>

void main()
{
    int m,n,p,q,i,j,k;
    printf("Enter the order of Matrix A (m x n): ");
    scanf("%d %d",&m,&n);
    printf("Enter the order of Matrix B (p x q): ");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("\nMatrix multiplication not possible. Columns of A must equal rows of B.\n");
        return;
    }
    int A[m][n],B[p][q],C[m][q];
    printf("Enter the elements of Matrix A in row major order:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of Matrix B in row major order:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%4d",B[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix (A x B):\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%4d",C[i][j]);
        }
        printf("\n");
    }
}
