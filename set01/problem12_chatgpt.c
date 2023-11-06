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
    int n;
    
    printf("Enter the number of complex numbers (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive value for n.\n");
        return 1;
    }

    struct Complex numbers[n]; // Create an array of complex numbers

    // Input the complex numbers
    for (int i = 0; i < n; i++) {
        printf("Enter real and imaginary parts of complex number %d: ", i + 1);
        scanf("%lf %lf", &numbers[i].real, &numbers[i].imag);
    }

    // Initialize the sum to the first complex number
    struct Complex sum = numbers[0];

    // Add all the complex numbers to the sum
    for (int i = 1; i < n; i++) {
        sum = addComplex(sum, numbers[i]);
    }

    // Display the result
    printf("Sum of %d complex numbers = %.2lf + %.2lfi\n", n, sum.real, sum.imag);

    return 0;
}
