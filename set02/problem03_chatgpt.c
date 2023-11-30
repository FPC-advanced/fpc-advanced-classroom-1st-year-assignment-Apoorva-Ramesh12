#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int number, result;

    // Input the number
    number = input_number();

    // Check if the number is composite
    result = is_composite(number);

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

// Function to check if the number is composite
int is_composite(int n) {
    int i, count = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count > 2) {
        return 1; // It is a composite number
    }
    return 0; // It is not a composite number
}

// Function to output the result
void output(int n, int result) {
    if (result == 1) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}
