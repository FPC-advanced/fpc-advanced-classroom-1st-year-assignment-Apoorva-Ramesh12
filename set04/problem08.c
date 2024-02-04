//Write a program to add n fractions
#include<stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
int main()
{
    int n;
    n=input_n();
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction sum;
    sum=add_n_fractions(n,f);
    output(n,f,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter the number of fractions:");
    scanf("%d",&x);
    return x;
}
Fraction input_fraction()
{
    Fraction frac;
    printf("Enter the numerator:");
    scanf("%d",&frac.num);
    printf("Enter the denominator:");
    scanf("%d",&frac.den);
    return frac;
}
void input_n_fractions(int n, Fraction f[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Fraction no. %d",i+1);
        f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction res;
    res.num=(f2.den*f1.num)+(f1.den*f2.num);
    res.den=f1.den*f2.den;
}
int find_gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return find_gcd(b%a,a);
}
Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum;
    for(int i=0;i<n;i++)
    {
        sum=add_fractions(f[i],sum);
    }
    int gcd_fract=find_gcd(sum.num,sum.den);
    if(gcd_fract!=1)
    {
        sum.num=sum.num/gcd_fract;
        sum.den=sum.den/gcd_fract;
    }
    if(sum.den==1)
    {
        return
    }
    return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
    int i=0;
    for(int i=0;i<n-1;i++)
    {
        printf("%d/%d",f[i].num,f[i].den);
        printf(" + ");
    }
    printf("%d/%d = %d/%d\n",f[i].num,f[i].den,sum.num,sum.den);
}
