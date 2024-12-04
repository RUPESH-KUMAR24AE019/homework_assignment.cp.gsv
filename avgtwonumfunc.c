//avg of two number

#include <stdio.h>
float avg(float num1, float num2)
{  
	float average = (num1 + num2) / 2;
	return average;
}
int main() {
	float n1, n2;
	printf("enter first number: ");
	scanf("%f", &n1);
	printf("enter second number: ");
	scanf("%f", &n2);
	float average = avg(n1, n2);
	printf("average %f",average);
}
