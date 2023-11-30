#include <stdio.h>

void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

int main() {
    float base, height, area;

    // Input
    input(&base, &height);

    // Calculate area
    find_area(base, height, &area);

    // Output
    output(base, height, area);

    return 0;
}

// Function to take input of base and height
void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

// Function to calculate the area of the triangle
void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

// Function to display the output
void output(float base, float height, float area) {
    printf("The area of the triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);
}
