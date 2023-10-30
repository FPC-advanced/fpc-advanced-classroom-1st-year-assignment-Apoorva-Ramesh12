//Write a program to find nth number in fibonacci sequence.
#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n;
    n=input();
    int fibo;
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}
int input()
{
    int n;
    printf("Enter the term you want to know in the series:");
    scnf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    int a=0,b=1,temp;
    for(int i=2;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}
void output(int n, int fibo)
{
    printf("The %dth number is %d",n,fibo);
}