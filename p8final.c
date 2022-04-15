#include <stdio.h>
#include <math.h>

typedef struct point
{
    float x, y;
} Point;


typedef struct line
{
    Point p;
    float distance;
} Line;

typedef struct polygon
{
    int sides;
    Line l[100];
    float perimeter;
} Polygon;


int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Line input_line(int n)
{
    Line l;
    printf("Enter the coordinates of point %d (x,y): \n", n);
    scanf("%f%f", &l.p.x, &l.p.y);
    return l;
}

void input_n_lines(int n, Line l[n])
{
    for (int i = 0; i < n; i++)
    {
        l[i] = input_line(i + 1);
    }
}

int input_polygon(Polygon* p)
{
    p->sides = input_n();
    input_n_lines(p->sides, p->l);
    p->perimeter = 0;
}

float find_distance(Point a, Point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void find_n_distance(int n, Line* l)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        l[i].distance = find_distance(l[i].p, l[i + 1].p);
    }
    l[i].distance = find_distance(l[i].p, l[0].p);
}

void find_perimeter(Polygon* p)
{
    find_n_distance(p->sides, p->l);
    for (int i = 0; i < p->sides; i++)
    {
        p->perimeter += p->l[i].distance;
    }
}

void output(Polygon p)
{
    printf("The perimeter of the polynomial is: %f\n", p.perimeter);
}

int main()
{
    Polygon p;
    input_polygon(&p);
    find_perimeter(&p);
    output(p);

    return 0;
}
