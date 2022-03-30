#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the value of n for fibonacci\n");
  scanf("%d",&n);
  return n;
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
  printf("The %dth number of the fibonacci sequence is %d\n",n,fibo);
}
int main()
{
  int a,f;
  a=input();
  f=find_fibo(a);
  output(a,f);
  return 0;
}