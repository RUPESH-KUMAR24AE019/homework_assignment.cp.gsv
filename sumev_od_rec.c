//Recursive function  sum odd and even
#include <stdio.h>
int Sum(int n) {
    if (n <= 0) return 0;
    if (n % 2 == 0) { 
        return n + Sum(n - 2);
    } else { 
        return n + Sum(n - 2);
    }
}
int main() {
    int n;
    printf("Enter positive integer: ");
    scanf("%d", &n);
    if (n > 0) {
        int result = Sum(n);
        printf("The result is: %d\n", result);
    }
    return 0;
}