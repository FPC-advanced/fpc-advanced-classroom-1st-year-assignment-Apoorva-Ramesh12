#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    return x;
}
int compare(int a,int b,int c)
{
    if(b>a)
    {
        a = b;
    }
    if(c>a)
    {
        a=c;
    }
    return a;
        
}
void output(int a, int b, int c, int largest)
{
    printf("The largest is %d\n",largest);
}
