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
  int n1=0,n2=1,fibo,i;
  for(i=0;i<n-1;++i)
    {
      fibo=n1+n2;
      n1=n2;
      n2=fibo;
    }
  return fibo;
}
void output(int n,int fibo)
{
  printf("%d\n",fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}