#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() {
    float x1, y1, x2, y2, x3, y3;
    int result;

    // Input coordinates of three points
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);

    // Check if the points form a triangle
    result = is_triangle(x1, y1, x2, y2, x3, y3);

    // Output the result
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}

// Function to input coordinates of three points
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter coordinates of first point: ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates of second point: ");
    scanf("%f %f", x2, y2);

    printf("Enter coordinates of third point: ");
    scanf("%f %f", x3, y3);
}

// Function to check if the points form a triangle
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    float slope1, slope2;
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    // If the slopes are different, it forms a triangle
    if (slope1 != slope2) {
        return 1;
    } else {
        return 0;
    }
}

// Function to output the result
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result) {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}
