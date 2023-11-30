#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *rev_str);

int main() {
    char original[100], reversed[100];

    // Input the string
    input_string(original);

    // Reverse the string
    str_reverse(original, reversed);

    // Output the reversed string
    output(original, reversed);

    return 0;
}

// Function to input the string
void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);
}

// Function to reverse the string
void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev_str[j++] = str[i];
    }
    rev_str[j] = '\0'; // Add null terminator to indicate end of string
}

// Function to output the reversed string
void output(char *a, char *rev_str) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", rev_str);
}
