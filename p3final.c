#include <stdio.h>
int input_number()
{
  int n;
  printf("enter value:\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int c;
  for(int i=2;i<n/2;i++)
    {
      if(n%i==0)
      {
        c=0;
      }
      else
      {
        c=1;
      }
    }
  return c;
}
void output(int n,int is_prime)
{
  int c;
  if(c==1)
  {
    printf("%d is prime\n",n);
  }
  else
    printf("%d is not prime\n",n);
}
int main()
{
  int n,c;
  n=input_number();
  c=is_prime(n);
  output(n,c);
  return 0;
}