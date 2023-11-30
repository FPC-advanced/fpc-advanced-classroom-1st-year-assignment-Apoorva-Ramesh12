#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int num1, num2, gcd;

    // Input two numbers
    num1 = input();
    num2 = input();

    // Calculate GCD
    gcd = find_gcd(num1, num2);

    // Output the GCD
    output(num1, num2, gcd);

    return 0;
}

// Function to input a number
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to find the GCD using Euclidean algorithm
int find_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to output the GCD
void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}
