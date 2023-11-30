// Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *rev_str);
int main()
{
    char str[100];
    input_string(str);
    char rev_str[100];
    str_reverse(str, rev_str);
    output(str, rev_str);
    return 0;
}
void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%[^\n]", a);
}
void str_reverse(char *str, char *rev_str)
{
    int len = strlen(str);
    int i, j = 0;
    for (i = len - 1; i >= 0; i--)
    {
        rev_str[j] = str[i];
        j++;
    }
    rev_str[j] = '\0';
}
void output(char *a, char *rev_str)
{
    printf("Reversed string:%s \n", rev_str);
}