//Write a program to find the perimeter of a polygon
#include<stdio.h>
#include<math.h>
typedef struct point {
    float x,y;
} Point;
typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int main()
{
    

}
int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon:");
    scanf("%d",&n);
    return n;
}
Point input_point(char *promt_msg)
{
    Point pnt;
    printf("%s",promt_msg);
    printf("x:" );
    scanf("%f",&pnt.x);
    printf("y: ");
    scanf("%f",&pnt.y);
    return pnt;
}
int input_polygon(Polygon *p)
{
    p->sides=input_n();
    for(int i=0; i<=p->sides;i++)
    {
        char prompt_msg[50];
        printf("Enter the co-ordinates for point %d:",i+1);
        p->p[i]=input_point(prompt_msg);
    }
    return 0;
}
float find_distance(Point a, Point b)
{
    return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}
void find_perimeter(Polygon* p)
{
    p->perimeter=0.0;
    for(int i=0;i<p->sides;i++)
    {
        p->perimeter = find_distance(p->p[i],p->p[i+1]);
    }
}
void output(Polygon p)
{
    printf("Perimeter of the Polygon is: %2f \n",p.perimeter);
}