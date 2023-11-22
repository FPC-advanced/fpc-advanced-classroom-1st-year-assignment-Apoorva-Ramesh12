//Write a C program to compare two strings, character by character.
#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    int result;
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string: ");
    scanf("%s",string1);
    printf("Enter the second string: ");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int largest,i,j;
    while(string1[i]!='\0' && string2[j]!='\0')
    {
        if(string1[i]==string2[j])
        {
            i++;
            j++;
        }
        else if(string1[i]<string2[j])
        {
            largest=2;
            break;
        }
        else if(string1[i]>string2[j])
        {
            largest=1;
            break;
        }
        if(largest==0)
        {
            if(string1[i]=='\0' && string2[j]!='\0')
            {
                
            }
        }
    }
    
}
void output(char *string1, char *string2, int result)
{
    if(result==1)
    {
    printf("The greater string among %s and %s is %s",string1,string2,string1);
    }
    else if(result==2)
    {
    printf("The greater string among %s and %s is %s",string1,string2,string2);
    }
    else
    {
        printf("The strings are equal.");
    }
}