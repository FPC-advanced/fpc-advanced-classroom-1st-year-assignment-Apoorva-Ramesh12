//Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
	int n;
	n=input_n();
	Triangle t[n];
	input_n_triangles(n,t);
	find_n_areas(n,t);
	Triangle smallest;
	smallest=find_smallest_triangle(n,t);
	output(n,t,smallest);
	return 0;	


}
int input_n()
{
	int n;
	printf("Enter the number of triangles: ");
	scanf("%d",&n);
	return n;
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
void input_n_triangles(int n, Triangle t[n])
{
	for(int i=0;i<n;i++)
	{
		t[i]=input_triangle();
	}
}
void find_area(Triangle *t)
{
	t->area=0.5*(t->base)*(t->altitude);
}
void find_n_areas(int n,Triangle t[n])
{
	for(int i=0;i<n;i++)
	{
		find_area(&t[i]);
	}
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
	Triangle smallest=t[0];
	for(int i=0;i<n;i++)
	{
		if(t[i].area>smallest.area)
		{
			smallest=t[i];
		}
	}
	return smallest;
}
void output(int n,Triangle t[n],Triangle smallest)
{
	for(int i=0;i<n;i++)
	{
		printf("Triangle No. %d",i+1);
		printf("Base=%.2f  Altitude=%.2f",t[i].base,t[i].altitude);
	}
	printf("Smallest triangle:\n Base: %.2f Altitude: %.2f Area: %.2f",smallest.base,smallest.altitude,smallest.area);
}