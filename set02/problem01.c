//Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base,height;
    input(&base,&height);
    float area;
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float *base, float *height)
{
    printf("Enter the base: ");
    scanf("%f",base);
    printf("Enter the height: ");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("Area of the triangle= %f",area);
}