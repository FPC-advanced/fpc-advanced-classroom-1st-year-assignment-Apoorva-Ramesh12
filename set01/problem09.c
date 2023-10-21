//Write a C program to find the square root of a number.
#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;

}
float input()
{
    float x;
    printf("Enter the number: ");
    scanf("%f",&x);
    return x;
}
float square_root(float n)
{
    float ig=1,ig1;
    while(1)
    {
        ig1=0.5*(ig+n/ig);
        if(ig-ig1<0.000001)
        {
            return ig1;
        }
        ig=ig1;
    }
}
void output(float n,float sqrroot)
{
    printf("Square root of %f is %.2f",n,sqrroot);
}