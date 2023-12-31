//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
#include<math.h>
int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int n);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
    int n;
    n=input_array_size();
    int a[n];
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
int is_composite(int n)
{
    
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    
}
int sum_composite_numbers(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int comp=is_composite(a[i]);
        if(comp==1)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("Sum=%d\n",sum);
}