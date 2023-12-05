//Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
#include<math.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a,b;
    a=input();
    b=input();
    int gcd;
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    // if(a==0)
    // {
    //     return b;
    // }
    // return find_gcd(b%a,a);
    while(a!=0)
    {
        int temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}
void output(int a, int b, int gcd)
{
    printf("GCD of %d and %d is %d\n",a,b,gcd);
}