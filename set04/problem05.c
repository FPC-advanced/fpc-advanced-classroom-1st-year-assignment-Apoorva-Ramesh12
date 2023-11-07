//Write a program to find the index of the largest number in an array
#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int main()
{
    int n;
    n=input_size();
    int a[n];
    input_array(n,a);
    int index;
    index=find_largest_index(n,a);
    output(index);
    return 0;
}
int input_size()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
    int largest=a[0],index;
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            index=i;
        }
    }
    return index;
}
void output(int index)
{
    printf("The index of the largest number in the array is %d",index);
}
