#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main() {
    int number, result;

    // Input the number
    number = input_number();

    // Check if the number is prime
    result = is_prime(number);

    // Output the result
    output(number, result);

    return 0;
}

// Function to input the number
int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to check if the number is prime
int is_prime(int n) {
    if (n <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // It is not a prime number
        }
    }
    return 1; // It is a prime number
}

// Function to output the result
void output(int n, int result) {
    if (result == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}
