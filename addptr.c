//Q. addition using pointer 
#include<stdio.h>
int main()
{
   int a,b ,sum;
   printf("Enter the  1st number   :");
   scanf("%d",&a);
   printf("Enter the 2nd number   :");
   scanf("%d",&b);
    sum = a + b ;
   int *p= &a ;
   int *q =&b ;
   int *r =&sum ;
   printf("%d is the first number entered\n",*p);

    printf("%d is the second number entered \n",*q);

     printf("%d is the sum of the %d and %d\n",*r,*p,*q);
     return 0 ;
}