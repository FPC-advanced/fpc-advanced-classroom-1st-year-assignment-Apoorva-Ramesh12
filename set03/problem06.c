//Write a program to find the index of a substring of a string
#include<stdio.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main()
{
    char a[100],b[100];
    input_string(a,b);
    int index;
    char string[100],substring[100];
    index=sub_str_index(string,substring);
    output(string,substring,index);
    return 0;
}
void input_string(char* a, char* b)
{
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the substring: ");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int index;
    for(int i=0,j=0;string[i]!='\0' && substring[j]!='\0';i++,j++)
    {
        if(string[i]==substring[j])
        {
            index=string[i];
        }
    }
    return index;
}
void output(char *string, char *substring, int index)
{
    printf("The index of %s is %d in %s",substring,index,string);
}
