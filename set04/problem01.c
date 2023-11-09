//Write a program to find sum of two fractions
#include<stdio.h>
#include<math.h>
void input(int *num1, int *den1, int *num2, int *den2);
int find_gcd(int a, int b);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int main()
{
    int num1,den1,num2,den2;
    input(&num1,&den1,&num2,&den2);
    int res_num,res_den;
    int gcd;
    gcd=find_gcd(res_num,res_den);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the nummerator and denominator of the first fraction:");
    scanf("%d %d",num1,den1);
    printf("Enter the nummerator and denominator of the second fraction:");
    scanf("%d %d",num2,den2);
}
int find_gcd(int a, int b)
{
    int gcd=1;
    for(int i=1; i<=a &&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_den=
    *res_num=(num1*den2)+(num2*den1);
    
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d =%d/%d",num1,den1,num2,den2,res_num,res_den);
}