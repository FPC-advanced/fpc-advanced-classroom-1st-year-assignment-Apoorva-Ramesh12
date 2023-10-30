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
   int string_length=0,sub_length=0,i=0,j=0;
   for(string_length=0;string[string_length];string_length++);
   for(sub_length=0;substring[sub_length];sub_length++);
    for(int i=0;i<=string_length-sub_length;i++)
    {
        for(int j=0;j<sub_length;j++)
        {
            if(string[i+j]!=substring[j])
            break;
        }
    }
    if(j==sub_length)
    {
        return i;
    }
    return -1;
}
void output(char *string, char *substring, int index)
{
    if(index!=-1)
    {
    printf("'%s' found at index %d in the string %s \n".substring,index,string);
    }
    else{
        printf("'%s' not found in the string '%s'.\n",substring,string);
    }
}
