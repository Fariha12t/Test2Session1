/*#include<stdio.h>
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
  int i;
  printf("prime numbers are\n");
  for(i=1; i<n;i++)
    printf("%d,",a[i]);
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
}*/
#include <stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}

void ets(int n, int a[n])
{
  int i=0;
   /* Find next non-zero number */
  while(i<sqrt(n)){
   for(;a[i]==0 ;i++);
   for(int k=i+i;k<n;k += i)
     a[i] = 0;
   i++;
  }
}


void display(int n, int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}

int main()
{
  int n;
  n=input();
  int a[n];
  init_array(n,a);
  ets(n,a);
  display(n,a);
  return 0;
}