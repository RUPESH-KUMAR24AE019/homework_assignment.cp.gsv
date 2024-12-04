//transpose of a matrix                 

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the size of the matrices(N*N):"); //SIZE OF MATRIX
    scanf("%d",&n);
    int original[n][n],transpose[n][n];
   
    printf("enter the elements of the  original matrices A:\n");  //INPUT
    for (i=0; i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&original[i][j]);
        }
    }
    for (i=0; i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            transpose[i][j]=original[j][i];           
        }
    }
    printf("the original matrix:\n"); //PRINT ORIGINAL MATRIX
    for (i=0; i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("___%d___|  ",original[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of matrix : \n"); //PRINT TRANSPOSE MATRIX
    for (i=0; i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("___%d___|  ",transpose[i][j]);
        }
        printf("\n");
    }
    
}
