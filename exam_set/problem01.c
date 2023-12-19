#include <stdio.h>
int input_n();
int factorial(int n);
int check_factorial(int n);
void output(int n, int result);

int main()
{
    int n;
    n = input_n();
    int result;
    result = check_factorial(n);
    output(n, result);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    return x;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int check_factorial(int n)
{   int i;
    for ( i = 2; factorial(i) < n; i++);
    if (factorial(i) == n)
    {
        return 1;
    }
}

void output(int n, int result)
{
    if (result == 1)
    {
        printf("%d is a factorial number.\n", n);
    }
    else
    {
        printf("%d is not a factorial number.\n", n);
    }
}
