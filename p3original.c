#include<stdio.h>
int input_number()
{
  int x;
  printf("Enter any number:\n");
  scanf("%d",&x );
  return x;
}
int is_prime(int n)
{
  int i,count=0;
  for( i=1; i<=n ; i++)
  {
    if (n%i==0)
    count++;
  }   
  return count;
}
void output(int n, int is_prime)
{
  
  if (is_prime==2)
  printf("%d number is PRIME\n",n);
  else 
  printf("%d number is not prime\n",n);
}
int main()
{
  int n,x;
  n=input_number();
  x=is_prime(n);
  output(n,x);
  return 0;
}
