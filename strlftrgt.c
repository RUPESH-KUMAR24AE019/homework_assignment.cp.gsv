//extracting a substring from the left/right 

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("right part of string is:");
    int a = strlen(str);
    for(int i=a/2;i<a;i++)
    {
        printf("%c",str[i]);
    }
    printf("left part of string is:");
    for(int i=0;i<a/2;i++)
    {
        printf("%c",str[i]);
    }
}
