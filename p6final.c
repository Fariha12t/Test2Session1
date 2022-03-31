#include<stdio.h>
#include<string.h>
void input_string(char *a, char *b)
{
  printf("Enter a string\n");
  scanf("%s",a);
  printf("enter the substring\n");
  scanf("%s",b);
}
int str_substr(char *string, char *substring)
{
  int i,j=0;
  
  
  for ( i=0;string[i]!='\0'&&substring[j]!='\0';i++)
    {
     if(string[i]==substring[j])
     {
       j++;
      }else  
       j=0;
    }
  return i-j;
    
}
void output(char *string, char *substring, int index)
{
  printf("The index of the substring %s of string %s is %d",string,substring,index);
}
int main()
{
  int index;
  char a[20],b[20];
  input_string(a, b);
  index=str_substr(a,b);
  output(a,b,index);
  return 0;
}