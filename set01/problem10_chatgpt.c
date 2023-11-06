#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // Compare the two strings character by character
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
