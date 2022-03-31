#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter range:\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=1;i<=n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  for(int i=1;i<n;i++)
    {
      if(a[i]%2==0 || a[i]%3==0 || a[i]%5==0 || a[i]%7==0)
        {
          a[i]=0;
        }
    }
  }
  void out_put(int n,int a[n])
  {
    int i;
    printf("2,3,5,7,");
    for(i=1;i<n;i++)
      {  
         if(a[i]!=0)
           {
              printf("%d,",a[i]);
           }
      }
    printf("\n");
  } 
int main()
{
  int n,c;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}