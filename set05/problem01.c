//Write a program to find the distance between two points.
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
  printf("Enter the x-coordinate of the first point:");
  scanf("%f",&)
}