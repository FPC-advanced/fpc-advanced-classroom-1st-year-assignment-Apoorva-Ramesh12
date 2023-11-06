#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d different numbers:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("The sum of the %d numbers is: %d\n", n, sum);

    return 0;
}
