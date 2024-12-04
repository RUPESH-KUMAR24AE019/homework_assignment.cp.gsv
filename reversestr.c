//reversing a string 

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("the string in reverse order is:");
    int a = strlen(str);
    for(int i=a-1;i>=0;i--)
    {
        printf("%c",str[i]);

    }
}

