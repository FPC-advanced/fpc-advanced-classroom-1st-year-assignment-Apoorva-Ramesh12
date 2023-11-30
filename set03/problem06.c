//Write a program to find the index of a substring of a string
#include<stdio.h>
#include<string.h>
void input_string(char *a, char *b);
int sub_str_index(char *a, char *b);
void output(char *a, char *b, int index);
int main()
{
    char a[100],b[100];
    input_string(a,b);
    int index;
    index=sub_str_index(a,b);
    output(a,b,index);
    return 0;
}
void input_string(char *a, char *b)
{
    int size;
    printf("Enter the main string:");
    scanf("%s",a);
    printf("Enter the substring:");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int index=-1;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]==substring[0])
        {
            int j;
            for(j=0;substring[j]!='\0';j++)
            {
                if(string[i+j]!=substring[j])
                break;
            }
            if(substring[j]=='\0')
            {   
                index=i;
                break;
            }
        }
    }
    return index;
}
void output(char *a, char *b, int index)
{
    if(index!=-1)
    {
        printf("The index of %s in %s is %d",b,a,index);
    }
    else{
        printf("%s is not found in %s",b,a);
    }
}
