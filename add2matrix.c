//addition of two matrices



#include <stdio.h>
int main ()
{
    int A[2][2]={{10,15},{50,10}};
    int B[2][2]={{5,20},{0,20}};
    int c[2][2];
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("the resulting matrix c is : \n");
    for (int i=0; i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("_%d_|_",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}