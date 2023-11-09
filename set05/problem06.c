//Write a program to find the average of all the odd elements in an array
#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main()
{
    int n;
    n=input_n();
    int a[n];
    input(n,a);
    float avg;
    avg=odd_average(n,a);
    output(avg);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    return n;
}
void input(int n, int a[n])
{
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n])
{
    float avg;
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            sum=sum+a[i];
            count++;
        }
    }
    return (float) sum/count;
}
void output(float avg)
{
    printf("Average of all the odd elements is:%.2f",avg);
}