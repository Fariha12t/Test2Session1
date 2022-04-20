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
struct _polygon
{
 int n;
 Line l[100];
 float perimeter;
};
typedef struct _polygon Polygon;
int input_n()
{
  int n;
  printf("enter the number of sides\n");
  scanf("%d",&n);
  return n;
}
int input_polygon(int n,Polygon *p)
{
  p->n=input_n();
  return n;
}
Line input_line()
{
  Line a;
  printf("Enter the first and second coordinate\n");
  scanf("%f%f%f%f",&a.p1.x,&a.p1.y,&a.p2.x,&a.p2.y);
  return a;
}
void input_n_lines(int n,Line l[n])
{
  for (int i=0;i<n;i++)
    {
      l[i]=input_line();
    }
  }
void find_perimeter(Polygon *p)
{
  input_n_lines(p->n,p->l);
  p->perimeter=0;
  for(int i=0;i<p->n;i++)
    { p->perimeter=p->perimeter+sqrt(pow((p->l[i].p2.x)-(p->l[i].p1.x),2)+pow((p->l[i].p2.y)-(p->l[i].p1.y),2));
    }
}
void output(Polygon p)
{
  printf("The perimeter is %f\n",p.perimeter);
}
int main()
{
int x;
  Polygon p;
  x=input_polygon(x,&p);
  find_perimeter(&p);
  output(p);
  return 0;
  }