//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
    int n,a[n];
    n=input_array_size();
    input_array(n,a);
    int sum;
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
int input_array_size()
{
    int x;
    printf("Enter the size of the array:");
    scanf("%d",&x);
    return x;
}
void input_array(int n,int a[n])
{
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        for(int i=2;i<n;i++)
        {
            if(a[i]%i==0)
            {
                sum=sum+a[i];
            }
        }
    }
    return sum;
}
void output(int sum)
{
    printf("Sum=%d",sum);
}