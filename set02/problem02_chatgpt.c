#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int is_scalene);

int main() {
    int side1, side2, side3;
    int is_scalene;

    // Input the lengths of the sides
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    // Check if the triangle is scalene
    is_scalene = check_scalene(side1, side2, side3);

    // Output the result
    output(side1, side2, side3, is_scalene);

    return 0;
}

// Function to input the length of a side
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

// Function to check if the triangle is scalene
int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // It is a scalene triangle
    }
    return 0; // It is not a scalene triangle
}

// Function to output the result
void output(int a, int b, int c, int is_scalene) {
    if (is_scalene == 1) {
        printf("Triangle with sides %d, %d, %d is a scalene triangle.\n", a, b, c);
    } else {
        printf("Triangle with sides %d, %d, %d is not a scalene triangle.\n", a, b, c);
    }
}
