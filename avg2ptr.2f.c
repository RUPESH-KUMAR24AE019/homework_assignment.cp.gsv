//avg of 2 floating point number... result should be two digits  after the decimal

#include <stdio.h>
int main()
{
   float a,b,sum;
   printf("Enter the  first number   :");
   scanf("%f",&a);
   printf("Enter the  second number   :");
   scanf("%f",&b);
    sum = (a + b) ;
  

   float *p= &a ;
   float *q =&b ;
   float *r =&sum ;
   printf("%f is the first number entered\n",*p);

    printf("%f is the second number entered \n",*q);

     printf("%0.2f is the avg of the %f and %f\n",*r,*p,*q);
     
     return 0 ;
}