//Write a program to find sum of two fractions
#include<stdio.h>
#include<math.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
    }
int main()
{
    int num1,den1,num2,den2;
    input(&num1,&den1,&num2,&den2);
    int res_num,res_den;
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator and denominator of the first fraction:");
    scanf("%d %d",num1,den1);
    printf("Enter the numerator and denominator of the second fraction:");
    scanf("%d %d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num=(den2*num1)+(den1*num2);
    *res_den=den1*den2;
    int gcd_fract=gcd(*res_num,*res_den);
    if(gcd_fract!=1)
    {
        *res_num=*res_num/gcd_fract;
        *res_den=*res_den/gcd_fract;
    }
    
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    if(res_den!=1)
    {
        printf("%d/%d + %d/%d =%d/%d",num1,den1,num2,den2,res_num,res_den);
    }
    else if(res_den==1)
    {
        printf("%d/%d + %d/%d =%d",num1,den1,num2,den2,res_num);
    }
}