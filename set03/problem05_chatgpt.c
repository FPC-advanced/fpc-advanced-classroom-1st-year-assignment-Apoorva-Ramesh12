#include<stdio.h>
#include<stdbool.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, bool a[n+1]) {
    for (int i = 0; i <= n; i++) {
        a[i] = true; // Initialize array elements as true
    }
}

void eratosthenes_sieve(int n, bool a[n+1]) {
    for (int p = 2; p * p <= n; p++) {
        if (a[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                a[i] = false; // Mark multiples of p as false (not prime)
            }
        }
    }
}

void output(int n, bool a[n+1]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == true) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    bool arr[n+1];
    init_array(n, arr);
    eratosthenes_sieve(n, arr);
    output(n, arr);
    return 0;
}
