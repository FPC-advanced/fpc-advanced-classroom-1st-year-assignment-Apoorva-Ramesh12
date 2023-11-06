//Write a C program to find sum of all natural numbers until n
#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
    int n;
    n=input_n();
    int sum;
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter the value of n: ");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n,int sum)
{
    printf("The sum %d natural numbers is %d",n,sum);
}
