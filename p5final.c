#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    a[i]=i+1;
  }
  a[0]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=0;i<=sqrt(n);i++)
  {
    if(a[i]!=0)
    {
     for(int j=a[i]+a[i];j<=n;j=j+a[i])
     {
       a[j-1]=0;
     }
    } 
  }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<=n;i++)
  {
    if(a[i]!=0)
    {
      printf("%d\t",a[i]);
    }
  }
}
int main()
{
  int n,a[n];
  n=input();
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}