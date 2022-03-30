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
      int temp=b;
      b=a+b;
      a=temp;
    }
  return a;
}
void output(int n,int fibo)
{
  printf("The fibonacci sequence for n=%d is %d\n",n,fibo);
}
int main()
{
  int a,f;
  a=input();
  f=find_fibo(a);
  output(a,f);
  return 0;
}