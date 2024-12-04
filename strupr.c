//Convert String to Uppercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char uppercase[100];
    int i;
    printf("Enter a string: ");         // Input the string
    fgets(uppercase, sizeof(uppercase), stdin);                                    
    for (i = 0; uppercase[i] != '\0'; i++)        // Convert each character to uppercase
    {
        uppercase[i] = toupper(uppercase[i]);
    }
    printf("Uppercase string: %s", uppercase);
    return 0;
}
