//Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result;
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the x and y coordinate of the first point:");
    scanf("%f %f",x1,y1);
    printf("Enter the x and y coordinate of the second point:");
    scanf("%f %f",x2,y2);
    printf("Enter the x and y coordinate of the third point:");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float s1,s2,s3;
    s1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    s2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    s3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    int result=0;
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    {
        result=1;
    }
    return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The 3 points can form a triangle.")
    }
    else{
        printf("The 3 points cannot form a triangle.")
    }
}