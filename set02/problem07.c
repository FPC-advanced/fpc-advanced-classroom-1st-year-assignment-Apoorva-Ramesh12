//Write a program to find the area of a triangle.

#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
	Triangle t;
	t=input_triangle();
	find_area(&t);
	output(t);
	return 0;
}
Triangle input_triangle()
{
	Triangle t;
	printf("Enter the base :");
	scanf("%f",&t.base);
	printf("Enter the altitude: ");
	scanf("%f",&t.altitude);
	return t;
}
void find_area(Triangle *t)
{	Triangle t;
	t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
	printf("Area of triangle with base %f ,altitude %f is %.2f",t.base,t.altitude,t.area);
}