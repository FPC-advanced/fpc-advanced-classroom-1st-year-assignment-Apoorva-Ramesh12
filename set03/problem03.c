//Write a program to check if the given number is prime
#include<stdio.h>
#include<math.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n;
    n=input_number();
    int result;
    result=is_prime(n);
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
int is_prime(int n)
{
     int result=0;
    // if(n<=1)
    // {
    //     result=1;
    // }
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            result=1;
        }
    }
    return result;
}
void output(int n, int result)
{
    if(result==0)
    {
        printf("%d is a prime number.\n",n);
    }
    else
    {
        printf("%d is not a prime number.\n",n);
    }
}