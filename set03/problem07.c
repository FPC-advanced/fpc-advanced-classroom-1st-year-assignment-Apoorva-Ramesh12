//Write a program to find the length of a line
#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main()
{
    Line l;
    l=input_line();
    find_length(&l);
    output(l);
    return 0;
}
Point input_point()
{
    Point p;
    printf("Enter the x coordinate of  point:");
    scanf("%f",&p.x);
    printf("Enter the y coordinate of  point:");
    scanf("%f",&p.y);
    return p;
}
Line input_line()
{
    Line l;
    l.p1=input_point();
    l.p2=input_point();
    return l;
}
void find_length(Line *l)
{
    float x_dist,y_dist;
    x_dist=l->p2.x - l->p1.x;
    y_dist=l->p2.y - l->p1.y;
    l->distance=sqrt(x_dist*x_dist + y_dist*y_dist);
}
void output(Line l)
{
    printf("Coordinates of point 1: %.2f,%.2f",l.p1.x,l.p1.y);
    printf("\nCoordinates of point 2: %.2f,%.2f",l.p2.x,l.p2.y);
    printf("\nLength of the line(or distance between the points) is: %.4f",l.distance);
}