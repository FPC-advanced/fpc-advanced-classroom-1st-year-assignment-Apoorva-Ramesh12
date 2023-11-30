#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main() {
    Triangle tri;

    // Input triangle details
    tri = input_triangle();

    // Calculate area
    find_area(&tri);

    // Output the area
    output(tri);

    return 0;
}

// Function to input triangle details
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

// Function to calculate the area of the triangle
void find_area(Triangle *t) {
    t->area = 0.5 * (t->base) * (t->altitude);
}

// Function to output the area of the triangle
void output(Triangle t) {
    printf("The area of the triangle with base %.2f and altitude %.2f is: %.2f\n", t.base, t.altitude, t.area);
}
