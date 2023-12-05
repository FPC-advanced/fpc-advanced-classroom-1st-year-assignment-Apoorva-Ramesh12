//Write a program to find if a triangle is scalene.
#include<stdio.h>
#include<math.h>
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
    float x;
    printf("Enter the side:");
    scanf("%f",&x);
    return x;
}
int check_scalene(float a,float b,float c)
{
   if(fabs(a-b)>0 && fabs(b-c)>0 && fabs(c-a)>0)
   {
        return 1;
   }
    
}
void output(float a,float b,float c, int isscalene)
{
    if(isscalene==1)
    {
        printf("The triangle is scalene.\n");
    }
    else
    {
        printf("The triangle is not scalene.\n");
    }
}
