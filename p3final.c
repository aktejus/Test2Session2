#include<stdio.h>
#include<math.h>
int input_number()
{
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int i;
  for(i=2;i<=sqrt(n);i++)
  {
    if(n%i==0);
    return 0;
  }
  return 1;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}
int main()
{
  int a,b;
  a=input_number();
  b=is_prime(a);
  output(a,b);
  return 0;
}