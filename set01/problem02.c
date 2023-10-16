//2. Write a C program to add two numbers.

#include<stdio.h>
int input();
int add(int a, int b,int sum);
void output(int sum);
int main()
{
    int a,b;
    a=input();
    b=input();
    int sum;
    sum=add(a,b,sum);
    output(sum);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
int add(int a,int b,int sum)
{
    sum=a+b;
    return sum;
}
void output(int sum)
{
    printf("Sum=%d",sum);
}
