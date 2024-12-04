// //sum of square 

#include<stdio.h>
void main()
{
    int a,sumsq=0;
    printf("enter the no. till you want to add their square\n");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        sumsq=sumsq+i*i;
    }
    printf("the sum of squares:\n");
    printf("%d",sumsq);
}
