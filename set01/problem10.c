// Write a C program to compare two strings, character by character.
#include <stdio.h>
#include <string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    int result;
    result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{
    int largest=0, i = 0;
    while(string1[i]!='\0' && string2[i]!='\0')
    {    
        if(string1[i]>string2[i])
        {
            largest=1;
            break;
        }
        else if(string1[i]<string2[i])
        {
            largest=2;
            break;
        }
        else
        {
            i++;
        }
        
        // if(string1[i]!='\0' && string2[i]=='\0')
        // {
           
        //     largest=1;
        // }
        // else if(string2[i]!='\0' && string1[i]=='\0')
        // {
        //     largest=2;
        //     break;
        // }
        // else
        // {
        //     largest=0;
        // }
        
    }
    
    return largest;   
}
void output(char *string1, char *string2, int result)
{
    if (result == 1)
    {
        printf("The greater string among %s and %s is %s\n", string1, string2, string1);
    }
    else if (result == 2)
    {
        printf("The greater string among %s and %s is %s\n", string1, string2, string2);
    }
    else
    {
        printf("The strings are equal.\n");
    }
}