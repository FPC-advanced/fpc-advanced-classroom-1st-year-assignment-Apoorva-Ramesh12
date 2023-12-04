//Write a program find whether a number is a composite number
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n;
    n=input_number();
    int result;
    result=is_composite(n);
    output(n,result);
    return 0;
}
int input_number()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    int result=0;
    for(int i=2;i<n);i++)
    {
        if(n%i==0)
        {
            result=1;
        }
    }
    return result;
}
void output(int n,int result)
{
    if(result==1)
    {
        printf("%d is a composite number.\n",n);
    }
    if(result==0)
    {
        printf("%d is not a composite number.\n",n);
    }
}