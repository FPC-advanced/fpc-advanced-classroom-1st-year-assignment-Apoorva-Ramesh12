//Write a program to evaluate a polynomial at a given point using Horner's Method
#include<stdio.h>
#include<math.h>
int input_degree(); //Degree of the polynomial
void input_coefficients(int n, float a[n]); //Input the coefficients of the polynomial including the extra coefficient
float input_x(); //Input the value of x at which the polynomial is calculated
float evaluate_polynomial(int n, float a[n], float x); //Calculate the value of the polynomial
void output(int n, float a[n], float x, float result);
int main()
{
    int n;
    n=input_degree();
    float a[n+1];
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
    printf("Enter the coefficients:");
    for(int i=0;i<=n;i++)
    {
        printf("\nEnter the coefficient for %d term:",i);
        scanf("%f",&a[i]);
    }
}
float input_x()
{
    float a;
    printf("Enter the value of x:");
    scanf("%f",&a);
    return a;
}
float evaluate_polynomial(int n, float a[n], float x)
{
    float sum=a[n];
    for(int i=n;i>=0;i--)
    {
        sum=sum+a[i]*x;
    }
    return sum;
}
void output(int n, float a[n], float x, float result)
{
    printf("\nThe polynomial is:\n");
    for(int i=0;i<=n;i++)
    {
        if(i<n)
        {
            printf("%.2fx^%d +",a[i],n-i);
        }
        else
        {
            printf("%.2f\n",a[i]);
        }
    }
    printf("The result of the polynomial at x=%.2f is: %.2f\n",x,result);
}


