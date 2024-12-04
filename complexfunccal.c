#include <stdio.h>
#include <math.h>


typedef struct {
    float real;
    float imag;
} Complex;


Complex add(Complex a, Complex b) {
    Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result = {a.real - b.real, a.imag - b.imag};
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result = {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
    return result;
}

Complex divide(Complex a, Complex b) {
    float denominator = b.real * b.real + b.imag * b.imag;
    Complex result = {(a.real * b.real + a.imag * b.imag) / denominator, (a.imag * b.real - a.real * b.imag) / denominator};
    return result;
}
int main() {
    
    Complex c1 = {4, 3}, c2 = {2, -1};
    Complex sum = add(c1, c2);
    printf("Complex Addition: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
