#include<stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex readComplexNumber() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void writeComplexNumber(Complex c) {
    if (c.imag >= 0)
        printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
    else
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.imag);
}

Complex addComplexNumbers(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex multiplyComplexNumbers(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    Complex c1, c2, sum, product;
    printf("Enter the first complex number:\n");
    c1 = readComplexNumber();
    printf("Enter the second complex number:\n");
    c2 = readComplexNumber();
    sum = addComplexNumbers(c1, c2);
    product = multiplyComplexNumbers(c1, c2);
    printf("\n");
    writeComplexNumber(c1);
    writeComplexNumber(c2);
    writeComplexNumber(sum);
    writeComplexNumber(product);
    return 0;
}
