//Write a program to find the nCr of given n and r
#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r;
    input_n_and_r(&n,&r);
    int result;
    result=nCr(n,r);
    output(n,r,result);
    return 0;
}
void input_n_and_r(int *n, int *r)
{
    printf("Enter the value of n:");
    scanf("%d",n);
    printf("Enter the value of r:");
    scanf("%d",r);
}
int nCr(int n,int r)
{
    int result,num=1,den=1;
   if(r==0 || r==n )
   {
     result=1;
   }
   else if(r>n)
   {
    result=0;
   }
   else
   {
        for(int i=0;i<=r;i++)
        {
            num=num*(n-i);
        }
        for(int i=1;i<=r;i++)
        {
            den=den*i;
        }
        result=num/den;
   }
   
   return result;
}
void output(int n, int r, int result)
{
    if(result==0)
    {
        printf("Invalid input.");
    }
    else 
    {
        printf("%dC%d =%d\n",n,r,result);
    }
}