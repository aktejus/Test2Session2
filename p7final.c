#include<stdio.h>
#include<math.h>
struct _point 
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("Enter the values of x and y of the point\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  printf("Enter the first point\n");
  l.p1=input_point();
  printf("Enter the second point\n");
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(Line l)
{
  printf("The length of the line is %f",l.distance);
}
int main()
{
  Line l=input_line();
  find_length(&l);
  output(l);
  return 0;
}