#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
 // int c=0,f=0,i; 
 // for(i=1;i<=n;i++)
   // {
     // if(n%i == 0)
//      c++;
 //   }
//  if(c>2)
  //  f=1;
 // return f;
  int i,c=0;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
        c++;
    }
  return c;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}
int main()
{
  int n=input_number();
  int c=is_prime(n);
  output(n,c);
  return 0;
}