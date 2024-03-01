//Write a program to count the number of words in a string using strtok (string.h)
#include<stdio.h>
#include<string.h>
void input_string(char *a);
int count_words(char *string,char *delims);
void output(char *string, int no_words);
int main()
{
    char string[1000];
    char delims[]=".,/()-_:;";
    input_string(string);
    int no_words;
    no_words=count_words(string,delims);
    output(string,no_words);
    return 0;
}
void input_string(char *a)
{
    printf("Enter the string:");
    scanf("%[^\n]s",a);
}
int count_words(char *string,char *delims)
{
    int count=0;
    char *word=strtok(string,delims);
    for(int i=0;string[i]!='\0';i++)
    {
        count++;
        word=strtok('\0',delims);
    }
    return count;
}
void output(char *string, int no_words)
{
    printf("String:",string);
    printf("There are %d number of words in the string",no_words);
}