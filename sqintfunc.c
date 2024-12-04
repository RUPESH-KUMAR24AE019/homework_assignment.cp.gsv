//square of integer using function

#include <stdio.h>
int sqr2(int n1, int n2)
{                                                           //function to find square of two numbers
	int square = (n1 * n1) + (n2 * n2);
	return square;
}
int main() {
	int n1, n2;
	printf("enter first number: ");
	scanf("%d", &n1);
	printf("enter second number: ");
	scanf("%d", &n2);
	printf("Sum of square of two numbers is %d", sqr2(n1, n2));
}