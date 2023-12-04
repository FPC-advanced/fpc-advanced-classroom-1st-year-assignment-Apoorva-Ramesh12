//Write a program to find if a triangle is scalene.
#include<stdio.h>
float input_side();
int check_scalene(float a, float b,float c);
void output(float a,float b,float c,int isscalene);
int main()
{
    float a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene;
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
float input_side()
{
    int x;
    printf("Enter the side:");
    scanf("%d",&x);
    return x;
}
int check_scalene(float a,float b,float c)
{
    if(a!=b && b!=c) //&& c!=a)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
void output(float a,float b,float c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle is scalene.\n");
    }
    else
    {
        printf("The triangle is not scalene.\n");
    }
}
