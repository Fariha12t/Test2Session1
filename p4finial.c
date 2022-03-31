#include <stdio.h>
int input()
{
  int n;
  printf("enter value of n:\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fib,n2=1,n1=0;
  if(n==0)
    return 0;
  else if (n==1)
    return 1;
  
  for(int i=0;i<n-1;i++)
    {
      fib=n1+n2;
      n1=n2;
      n2=fib;
    }
  return fib;
  }
void output(int n, int fibo)
{
  printf("%d",fibo);
  
}
  int main()
{
  int n,f;
  n=input();
  f=find_fibo(n);
  output(n,f);
  return 0;
}