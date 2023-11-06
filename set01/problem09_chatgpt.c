#include <stdio.h>

double heronSquareRoot(double x, double epsilon) {
    double guess = x;
    while ((guess * guess - x) > epsilon) {
        guess = 0.5 * (guess + x / guess);
    }
    return guess;
}

int main() {
    double num, squareRoot, epsilon;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {
        printf("Enter the desired level of accuracy (e.g., 0.00001): ");
        scanf("%lf", &epsilon);

        squareRoot = heronSquareRoot(num, epsilon);
        printf("Approximate square root of %.2lf is: %.6lf\n", num, squareRoot);
    }

    return 0;
}
