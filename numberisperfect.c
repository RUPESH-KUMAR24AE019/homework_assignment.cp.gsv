// computing e^x series up to n terms


#include <stdio.h>
int fact(int n) {                // function to find factorial
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	float fact_f = fact;
	return fact_f;
}
int sqr(int num, int pow) {       // num^pow
	int square = num;
	for (int i = 1; i <= pow; i++) {
		if (i == 1) {
			square = num;
		}
		else {
			square = square * num;
		}
	}
	float sqr = square;
	return sqr;
}
int main() {
	int x, m;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf(" how many terms do you want to calculate the series: ");
	scanf("%d", &m);
	float series = 1;
	for (int i = 1; i <= m - 1; i++) {
		float fract = sqr(x, i) / fact(i);
		printf("%f\n", fract);
		series = series + fract;
	}
	printf("\n");
	printf("%f", series);
}

