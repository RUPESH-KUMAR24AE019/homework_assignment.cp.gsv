//function char value to upper case

#include <stdio.h>
#include <ctype.h>

char upper(char c) {      //function to capitalise letter
	return toupper(c);
}
int main() {
	char letter;
	printf("Enter a character: ");
	scanf("%c", &letter);
	char capital = upper(letter);
	printf("Capitalised letter is: %c",capital);
}
