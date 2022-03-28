#include<stdio.h>
#include<string.h>
int string_length(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++);
  return i;
}

int string_ncmp(char *s1,char *s2)
{
  int n,i;
  for(int i=0; i<n && s1[i]==s2[i] && s1[i] != '\0';i++);
  return s1[i] - s2[i];
}


int string_index(char *s, char *subs)
{
  int l1=string_length(s);
  int l2=string_length(subs);
  if( l1 < l2)
      return -1;
  for(int i=0;i<l1-l2;i++)
    if (l2>l1)
      return i;
  return -1;
}

int main()
{
  int n;
  char s1,s2,*s,subs,i;
  n=string_length(s);
  string_ncmp(&s1,&s2);
  string_index(s,&subs);
  
  
  
  
  
  
}

