#include<stdio.h>
#include<math.h>
int input()
{
  int x;
  printf("Enter the value of n for fibonacci\n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n)
{
  int i,a=0,b=1,sum;
  for(i=1;i<n;i++)
    {
      
      sum=a+b;
      a=b;
      b=sum;
    }
  return a;
}
void output(int n,int fibo)
{
  
}