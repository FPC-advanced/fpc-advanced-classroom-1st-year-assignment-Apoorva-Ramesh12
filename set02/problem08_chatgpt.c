#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main() {
    int n;
    Triangle smallest;

    // Input the number of triangles
    n = input_n();

    // Declare an array of triangles of size n
    Triangle triangles[n];

    // Input details for n triangles
    input_n_triangles(n, triangles);

    // Calculate areas of all triangles
    find_n_areas(n, triangles);

    // Find the triangle with the smallest area
    smallest = find_smallest_triangle(n, triangles);

    // Output the smallest triangle
    output(n, triangles, smallest);

    return 0;
}

// Function to input the number of triangles
int input_n() {
    int num;
    printf("Enter the number of triangles: ");
    scanf("%d", &num);
    return num;
}

// Function to input details of a single triangle
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

// Function to input details of n triangles
void input_n_triangles(int n, Triangle t[n]) {
    printf("Enter details for %d triangles:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

// Function to calculate the area of a triangle
void find_area(Triangle *t) {
    t->area = 0.5 * (t->base) * (t->altitude);
}

// Function to calculate areas of all triangles
void find_n_areas(int n, Triangle t[n]) {
    for (int i = 0; i < n; i++) {
        find_area(&t[i]);
    }
}

// Function to find the triangle with the smallest area
Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i].area < smallest.area) {
            smallest = t[i];
        }
    }
    return smallest;
}

// Function to output the smallest triangle
void output(int n, Triangle t[n], Triangle smallest) {
    printf("The smallest triangle has base %.2f, altitude %.2f, and area %.2f\n", smallest.base, smallest.altitude, smallest.area);
}
