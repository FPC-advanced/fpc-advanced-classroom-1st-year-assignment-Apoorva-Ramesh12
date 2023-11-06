//Write a C program to find the square root of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n;
    n=input();
    float sqrroot;
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n;
    printf("Enter the number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float guess=n/2;
    float sqrroot=0;
   {
    while (1) {
        sqrroot = 0.5 * (guess + n / guess); 
        if (sqrroot == guess)
            break;
        
        guess = sqrroot;
                }
                return sqrroot;
    }
    
}
void output(float n, float sqrroot)
{
    printf("The square root of %.2f is %.6f",n,sqrroot);
}