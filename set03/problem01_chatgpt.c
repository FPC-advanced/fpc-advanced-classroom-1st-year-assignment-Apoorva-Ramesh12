#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
    float x1, y1, x2, y2, distance;

    // Input the coordinates of two points
    input(&x1, &y1, &x2, &y2);

    // Calculate the distance between the two points
    distance = find_distance(x1, y1, x2, y2);

    // Output the distance
    output(x1, y1, x2, y2, distance);

    return 0;
}

// Function to input the coordinates of two points
void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter x and y coordinates of first point: ");
    scanf("%f %f", x1, y1);

    printf("Enter x and y coordinates of second point: ");
    scanf("%f %f", x2, y2);
}

// Function to calculate the distance between two points
float find_distance(float x1, float y1, float x2, float y2) {
    float distance;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

// Function to output the distance between two points
void output(float x1, float y1, float x2, float y2, float distance) {
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, distance);
}
