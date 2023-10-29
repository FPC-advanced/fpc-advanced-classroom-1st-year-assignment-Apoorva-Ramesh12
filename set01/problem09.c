//Write a C program to find the square root of a number.
#include<stdio.h>
#include<math.h>
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
    float guess=n;
    for(int i=0;i<5;i++)
    {
        guess=0.5*(guess+n/guess);
    }
    return guess;
}
void output(float n, float sqrroot)
{
    printf("The square root of %f is %f",n,sqrroot);
}