//lenght of the string

#include<stdio.h>
void main()
{
    char str[50];
    int len=0;
    printf("enter the word whose length you want to find:\n");
    scanf("%s",str);
    while (str[len]!='\0')
    {
        len++;
    }
    printf("the length of the string:%d",len);
}        


