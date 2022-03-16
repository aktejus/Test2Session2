#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=1;i<n;i++)
    {
      if(a[i]=0)
        continue;
      for(int j=a[i+1];j<=n;j++)
        {
          if(j%a[i]==0)
          {
            a[j-1]==0;
          }
        }
    }
}
void out_put(int n, int a[n])
{
  
}
int main()
{
  int n;
  n=input_array_size();
  
}