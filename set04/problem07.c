//Write a program to add two fractions
#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);
int main()
{
    Fraction f1,f2;
    f1=input_fraction();
    f2=input_fraction();
    Fraction sum;
    sum=add_fractions(f1,f2);
    output(f1,f2,sum);
    return 0;
}
Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator:");
    scanf("%d",&f.num);
    printf("Enter the denominator");
    scanf("%d",&f.den);
    return f;
}
int find_gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return find_gcd(b%a,a);
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction res;
    res.num=(f2.den*f1.num)+(f1.den*f2.num);
    res.den=f1.den*f2.den;
    int gcd_fract=find_gcd(res.num,res.den);
    if(gcd_fract!=1)
    {
        res.num=res.num/gcd_fract;
        res.den=res.den/gcd_fract;
    }
    return res;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d/n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}