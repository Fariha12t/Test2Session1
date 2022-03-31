#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the pointd\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if (area==0)
    return 1;
  else 
    return 0;
  
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle==0)
  {
    printf("forms a traingle");
    
  }
  else
  {
    printf("doesnt form a triangle");
  }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int a;
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}

