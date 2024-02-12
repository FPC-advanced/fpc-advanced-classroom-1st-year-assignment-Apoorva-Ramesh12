//Write a C program to find sum of n different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input(n,a);
    int sum=0;
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int x;
    printf("Enter the size of the array: ");
    scanf("%d",&x);
    return x;
}
void input_array(int n,int a[n])
{
    int i;
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    printf("Sum=%d\n",sum);
}
