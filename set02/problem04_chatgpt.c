#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int num);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int size, sum;

    // Input array size
    size = input_array_size();

    // Declare array of given size
    int numbers[size];

    // Input array elements
    input_array(size, numbers);

    // Calculate sum of composite numbers
    sum = sum_composite_numbers(size, numbers);

    // Output the sum
    output(sum);

    return 0;
}

// Function to input the size of the array
int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

// Function to input elements into the array
void input_array(int n, int a[n]) {
    printf("Enter %d numbers into the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to check if a number is composite
int is_composite(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not composite
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1; // It is a composite number
        }
    }
    return 0; // It is not a composite number
}

// Function to calculate the sum of composite numbers in the array
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

// Function to output the sum
void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
