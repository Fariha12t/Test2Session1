#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=1;i<n;i++)
    {
      if(a[i]==0)
        continue;
        
        for(j=a[i]+1;j<=n;j++)
          {
            if(j%a[i]==0)
              a[j-1]=0;
          }
    } 
 
}
void output(int n, int a[n])
{

  printf("prime numbers are");
   for(int i=1;i<n;i++)
    if(a[i]!=0)
      
      printf(" %d ",a[i]);
  
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0; 
}
