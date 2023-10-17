// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void input_string(char *a);
void string_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[100];
    input_string(a);
    char str,rev_str;
    string_rev(str,rev_str);
    output(a,rev_str);
    return 0;

}
void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%s",a);
}
void string_rev(char *str, char *rev_str)
{
    int i,l,a,temp;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        rev_str[i]=str[l-i-1];
    }
    rev_str[l]='\0';
}
void output(char *a,char *reverse_a)
{
    printf("Entered string: %s\n",a);
    printf("Reversed string:%s \n",reverse_a);
}