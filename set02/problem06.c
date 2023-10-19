// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[100];
    input_string(&a);
    char str,rev_str;
    str_rev(&str,&rev_str);
    output(&a,&rev_str);
    return 0;

}
void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%s",a);
}
void str_rev(char *str, char *rev_str)
{
    int i,start,end;
    while(str[i]!='\0')
    {
        i++;
        end=i-1;
        for(start=0;start<i;start++)
        {
            str[start]=rev_str[end];
            end--;
        }
    }

   
}
void output(char *a,char *reverse_a)
{
    printf("Entered string: %s\n",a);
    printf("Reversed string:%s \n",reverse_a);
}