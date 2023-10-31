// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *rev_str);
int main()
{
    char a[100];
    input_string(a);
    char str[100],rev_str[100];
    str_reverse(str,rev_str);
    output(a,rev_str);
    return 0;

}
void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int i=0,j=0;
    int count=0;
    for(j=0;str[j]!='\0';j++)
    {
        count++;
    }
    while(str[i]!='\0')
    {
        rev_str[i]=str[count-i-1];
    }
    rev_str[count]='\0';
}
void output(char *a,char *rev_str)
{
    printf("Entered string: %s\n",a);
    printf("Reversed string:%s \n",rev_str);
}