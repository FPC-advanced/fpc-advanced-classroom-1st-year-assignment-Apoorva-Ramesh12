//Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene;
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side()
{
    int x;
    printf("Enter the side:");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    int isscalene;
    if(a!=b && b!=c && c!=a)
    {
        isscalene=0;
    }
    else
    {
        isscalene=1;
    }
    return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle is scalene.");
    }
    else
    {
        printf("The triangle is not scalene.");
    }
}
