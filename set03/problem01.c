// Write a program to find the distance between 2 points
#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    int x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    int distance;
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x coordinate of the first point:");
    scanf("%d",x1);
    printf("Enter the y coordinate of the first point:");
    scanf("%d",y1);
    printf("Enter the x coordinate of the second point:");
    scanf("%d",x2);
    printf("Enter the y coordinate of the second point:");
    scanf("%d",y2);

}
float find_distance(float x1, float y1, float x2, float y2)
{
    int distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between %d,%d and %d,%d is %d",x1,y1,x2,y2,distance);
}