// factorial using function

#include <stdio.h>
int fact(int n) {                // function to find factorial of a number
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	float fact_f = fact;
	return fact_f;
}

int main() {
	int num;
	printf("Enter the number you want to find factorial of: ");
	scanf("%d", &num);
	int factorial = fact(num);
	printf("factorial of the given number is:%d",factorial);
}
