//Write a C program to find the square root of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n;
    n=input();
    float sqrroot;
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n;
    printf("Enter the number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x0=n/2,diff=1,acc=0.000001; 
    float sqrroot;
    while (diff>acc)
    {
        sqrroot=0.5*(x0+(n/x0));
        diff=x0-sqrroot;
        x0=sqrroot;
    } 
    return sqrroot; 
}
void output(float n, float sqrroot)
{
    if(n<0 || n==0)
    {
        printf("Invalid input.");
    }
    else
    {
    printf("The square root of %f is %f\n",n,sqrroot);
    }
}