//Write a program to evaluate a polynomial at a given point using Horner's Method
#include<stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int main()
{
    int d;
    d=input_degree();
    int n;
    float a[100];
    input_coefficients(n,a);
    float x;
    x=input_x();
    float result;
    result=evaluate_polynomial(n,a,x);
    output(n,a,x,result);
    return 0;
}
int input_degree()
{
    int x;
    printf("Enter the degree of the polynomial:");
    scanf("%d",&x);
    return x;
}
void input_coefficients(int n, float a[n])
{
    printf("Enter the co-efficients of the polynomial:");
    for(int i=0;i<=n;i++)
    {
        printf("\nEnter the co-efficient for %d term:",i);
        scanf("%f",&a[i]);
    }
}
float input_x()
{
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    return x;
}
float evaluate_polynomial(int n,float a[n],float x)
{
    float result; //result=a[n]
    for(int i=n;i>=0;i--)
    {
        result=(result+a[i])*x;
    }
    return result;
}
void output(int n, float a[n], float x, float result)
{
    printf("The polynomial evaluated at x=%.2f is %.2f\n",x,result);
}