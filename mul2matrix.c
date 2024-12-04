//multiply of two matrices of order m*n and n*p respectively //not running now

#include<stdio.h>
void main()
{
    int m,n,p;
    int i,j;
    printf("enter the number of row of the first matrix:\n ");
    scanf("%d",&m);
    printf("enter the number of column of the first matrix:\n ");
    scanf("%d",&n);
    printf("enter the number of column of the second matrix:\n");
    scanf("%d",&p);
    int A[m][n],B[n][p],result[m][p];
    printf("enter the elements of matrix 1:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           
            scanf("%d   ",&A[i][j]);
        }
    }
    printf("enter the elements of matrix 2:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            
            scanf("%d   ",&B[i][j]);
        }
    }
    for (i = 0; i < m ; i++) {
        for (j = 0; j < p ; j++) {
            for (int k = 0; k < n; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("the multiplication of matrix:\n");
    for (i = 0; i < m ; i++) 
    {
        for (j = 0; j < p ; j++) 
        {
            printf("_%d__",result[i][j]); 
        }
        printf("\n");
    }
}