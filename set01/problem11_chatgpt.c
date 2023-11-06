#include <stdio.h>

// Define a structure to represent complex numbers
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum;

    // Input the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &complex1.real, &complex1.imag);

    // Input the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &complex2.real, &complex2.imag);

    // Call the addComplex function to find the sum
    sum = addComplex(complex1, complex2);

    // Display the result
    printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imag);

    return 0;
}
