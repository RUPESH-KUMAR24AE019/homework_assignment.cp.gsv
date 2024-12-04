//find avg using pointer 
#include <stdio.h>
int main()
{
   int num1,num2,avg;
   printf("Enter the  first number   :");
   scanf("%d",&num1);
   printf("Enter the  second number   :");
   scanf("%d",&num2);
   avg = (num1 + num2)/2 ;
   int *p= &num1 ;
   int *q =&num2;
   int *r =&avg ;
   printf("%d is the first number \n",*p);

    printf("%d is the second number  \n",*q);

     printf("%d is the avg of the %d and %d\n",*r,*p,*q);
     
     return 0 ;
}
