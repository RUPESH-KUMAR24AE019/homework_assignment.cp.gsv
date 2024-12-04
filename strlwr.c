//convert string to lowercase

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char lowercase[100];
    int i;
    printf("Enter a string: ");                 // Input the string
    fgets(lowercase, sizeof(lowercase), stdin);                                    
    for (i = 0; lowercase[i] != '\0'; i++)        // Convert each character to uppercase
    {
        lowercase[i] = tolower(lowercase[i]);
    }
    printf("lowercase string: %s", lowercase);
    return 0;
}