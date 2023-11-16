//Write a program to find the smallest of three fractions
#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;
Fraction input_fraction();
Fraction smallest_fraction(Fraction f1,Fraction f2,Fraction f3);
void output_smallest(Fraction f1,Fraction f2,Fraction f3,Fraction smallest);
int main()
{
    Fraction f1,f2,f3;
    f1=input_fraction();
    f2=input_fraction();
    f3=input_fraction();
    Fraction smallest;
    smallest=smallest_fraction(f1,f2,f3);
    output(f1,f2,f3,smallest);
    return 0;
}
Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator and denominator:");
    scanf("%d %d",&f.num,&f.den);
    return f;
}
Fraction smallest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
    double frac1=(double)f1.num/f1.den;
    double frac2=(double)f2.num/f2.den;
    double frac3=(double)f3.num/f3.den;
    
    if(frac1<frac2 && frac1<frac3)
    {
        return f1;
    }
    else if(frac2<frac1 &&frac2<frac3)
    {
        return f2;
    }
    else
    {
        return f3;
    }
}
void output_smallest(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
    printf("The smallest among %d/%d , %d/%d , %d/%d is %d/%d/n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}