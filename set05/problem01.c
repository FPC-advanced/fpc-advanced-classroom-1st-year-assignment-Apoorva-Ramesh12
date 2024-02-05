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
  Point p1,p2;
  p1=input();
  p2=input()
}