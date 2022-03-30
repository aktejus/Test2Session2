#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the three points of the triangle\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
float is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float area;
  area =0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return area;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,float istriangle)
{
  if(istriangle==0)
  {
    printf("The given points %f%f,%f%f and %f%f do not form a triangle",x1,y1,x2,y2,x3,y3);
  }
  else
    printf("The given points %f%f,%f%f and %f%f form a triangle",x1,y1,x2,y2,x3,y3);
}
int main()
{
  float x1,y1,x2,y2,x3,y3,area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area);
  return 0;
}