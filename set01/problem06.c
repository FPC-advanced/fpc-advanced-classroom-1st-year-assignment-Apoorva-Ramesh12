#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
int input(int *a,int *b,int *c)
{
    printf("Enter the numbers:");
    scanf("%d %d %d",a,b,c);
}
void compare(int a,int b, int c,int *largest)
{
    if(a>=b && a>=c)
    {
        *largest=a;
    }
    if(b>=c && b>=a)
    {
        *largest=b;
    }
    if(c>=a && c>=b)
    {
        *largest=c;
    }
}
void output(int a,int b,int c,int largest)
{
    printf("The largest number is %d",largest);
}
