//appending a string to another string

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string: "); // Input the first string
    fgets(str1, sizeof(str1), stdin);
     printf("Enter the second string: "); // Input the second string
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0')
    {
        i++;
    }
    i--;                                 // Remove last newline from line
    while (str2[j] != '\0')                     // Append str2 to str1
    {
        str1[i] = str2[j]; 
        i++;             // Move to next position in str1
        j++;            // Move to next character in str2
    }

    str1[i] = '\0'; 
    printf("Appended string: %s\n", str1);

    return 0;
}
