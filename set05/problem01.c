//Write a program to find the distance between two points.
#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
  Point a,b;
  a=input();
  b=input();
  float res;
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}
Point input()
{
  Point a;
  printf("Enter the x-coordinate of the point:");
  scanf("%f",&a.x);
  printf("Enter the y-coordinate of the point:");
  scanf("%f",&a.y);
  return a;
}
void dist(Point a, Point b, float *res)
{
  *res=sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}
