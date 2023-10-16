//Write a C program to find the sum of 2 complex numbers.
#include<stdio.h>
struct _complex {
	float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
    Complex a,b;
    a=input_complex();
    b=input_complex();
    Complex sum;
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
Complex input_complex()
{
    Complex comp;
    printf("Enter the real part:");
    scanf("%f",&comp.real);
    printf("Enter the imaginary part:");
    scanf("%f",&comp.imaginary);
    return comp;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("Sum : %.2f+i%.2f",sum.real,sum.imaginary);
}

