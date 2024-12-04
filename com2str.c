//compare two strings

#include<stdio.h>
void main()
{
    int i;
    char str1[100],str2[100];
    printf("Enter the first string: "); // Input the first string
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: "); // Input the second string
    fgets(str2, sizeof(str2), stdin);
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) 
    {
        if (str1[i] != str2[i])
        {
            printf("the strings are NOT equal:");
            break;
        }
        else
        {
            printf("strings are equal");
            break;
        }
    }
}
