#include<stdio.h>
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
Point input_point(int p1,int p2)
{
  printf("Enter the values of x and y of both the points\n");
  scanf("%f%f %f%f",&p1.x,&p1.y,&p2.x,&p2.y);
  return p1;
}
Line input_line(l)
{
  
}
int main()
{
  int a,b;
  input_point(a,b);
}