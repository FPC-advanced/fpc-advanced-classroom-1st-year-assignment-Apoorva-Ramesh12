#include <stdio.h>
#include <stdbool.h>

int input_array_size();
void init_array(int n, bool a[n]);
void erotosthenes_sieve(int n, bool a[n]);
void output(int n, bool a[n]);

int main() {
    int n;
    n = input_array_size();
    bool a[n];
    init_array(n, a);
    erotosthenes_sieve(n, a);
    output(n, a);
    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    return n;
}

void init_array(int n, bool a[n]) {
    for (int i = 2; i < n; i++) {
        a[i] = true;
    }
}

void erotosthenes_sieve(int n, bool a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == true) {
            for (int j = i * i; j < n; j += i) {
                a[j] = false;
            }
        }
    }
}

void output(int n, bool a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i < n; i++) {
        if (a[i] == true) {
            printf("%d\n", i);
        }
    }
}
