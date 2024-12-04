//CONCATENTION TWO STRING TO FORM A NEW STRING

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="hello";
    char s2[]=" rupesh";
    char s3[50];
    strcat(s1,s2);
    strcat(s3,s1);
    printf("string after concatention:\n %s",s3);
}

