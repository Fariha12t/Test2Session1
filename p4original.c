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
 /* int fibo=0,a=0,b=1;
  for(int i=0;i<=n;i++)
    {
      fibo=a;
      a=b;
      b=fibo+b;
    }
    return fibo;*/
  int temp=0,n2=0,n1=1;
  for(int i=1;i<=n;i++)
    {
      temp=n1;
      n1=n1+n2;
      n2=temp;
    }
  return n2;
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