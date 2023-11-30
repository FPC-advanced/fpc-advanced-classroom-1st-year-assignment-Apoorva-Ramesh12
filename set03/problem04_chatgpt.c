#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main() {
    int n, fibo;

    // Input the value of n
    n = input();

    // Find the nth Fibonacci number
    fibo = find_fibo(n);

    // Output the result
    output(n, fibo);

    return 0;
}

// Function to input the value of n
int input() {
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    return num;
}

// Function to find the nth Fibonacci number using recursion
int find_fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return find_fibo(n - 1) + find_fibo(n - 2);
}

// Function to output the result
void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}
