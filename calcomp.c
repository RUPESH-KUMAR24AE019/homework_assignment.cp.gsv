//extend the complex number program to include function for addition,subtraction,multiplication and divison

#include<stdio.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex a,b;
    printf("enter the real no \n :");
    scanf("%f",a.real);
    scanf("%f",b.real);
    printf("enter the complex no :");
    scanf("%f",a.imaginary);
    scanf("%f",b.imaginary);
    printf("sum of complex number %f + %fi",a.real+b.real,a.imaginary+b.imaginary);
    printf("sub of complex number %f + %fi",a.real-b.real,a.imaginary-b.imaginary);
    printf("mul of complex number %f + %fi + %fi - %f",a.real*b.real,a.real*b.imaginary,b.imaginary*b.real,a.imaginary*b.imaginary);
}
