#include <stdio.h>
int input_array_size();
void input_array(int n, int f[n]);
int is_factorial(int a);
void factorial_array(int n, int f[n], int g[n]);
void output(int n, int f[n], int g[n]);
int main()
{
    int n;
    n = input_array_size();
    int f[n];
    input_array(n, f);
    int g[n];
    factorial_array(n, f, g);
    output(n, f, g);
    return 0;
}
int input_array_size()
{
    int x;
    printf("Enter the size of the array:");
    scanf("%d", &x);
    return x;
}
void input_array(int n, int f[n])
{
    printf("Enter the numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
}
int is_factorial(int a)
{
    int fact=1;
    int i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return (fact==a);

}
void factorial_array(int n, int f[n], int g[n])
{

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(is_factorial(f[i])==1)
        {
            g[j++]=f[i];
        }
    }
}
void output(int n, int f[n], int g[n])
{
    printf("The factorial numbers in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        if (g[i] != 0)
        {
            printf("%d\n", g[i]);
        }
    }
}
