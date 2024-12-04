//Q.area of circle using pointer 
#include <stdio.h>
int main()
{
   float r,area;
   printf("Enter the radius   :");
   scanf("%f",&r);

    area = 3.14 * r*r ;
  

   float *p= &r ;
   float *q =&area ;
  
   printf("%f is the radius\n",*p);

     printf("%0.2f is the area of the circle  \n",*q);
     
     return 0 ;
}
