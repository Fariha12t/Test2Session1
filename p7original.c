#include<stdio.h>
#include<math.h>
struct _point 
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Line input_point()
{
  float x1,y1,x2,y2;
  printf("enter two points\n");
  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
}
void find_length(Line *l)
{
  Line *x1,*y1,*x2,*y2;
  *l=sqrt[(x2-x1)(x2-x1)+(y2-y1)*(y2-y1)];
}
void output(Line l)
{
  printf("the length of line is %f",l);
}
int main()
{
  Line a,l;
  a=input_point();
  find_length(&l);
  output(l);
  return 0;
}