#include "utils.h"

// Point
typedef struct
{
  int x;
  int y;
} Point;

Point create_Point(int x, int y)
{
  Point p;
  p.x = x;
  p.y = y;
  return p;
}

Point delete_Point(Point p)
{
  p.x = 0;
  p.y = 0;
}

Point update_Point(int x, int y, Point p)
{
  p.x = x;
  p.y = y;
}

Point print_Point(Point p)
{
  printf("x: %d, y: %d\n", p.x, p.y);
}

// Circle

typedef struct
{
  Point p;
  int radius;
} Circle;

Circle create_Circle(int x, int y, int radius)
{
  Circle c;
  c.p = create_Point(x, y);
  c.radius = radius;
  return c;
}

Circle print_Circle(Circle c)
{
  printf("x: %d, y: %d, r: %d\n", c.p.x, c.p.y, c.radius);
}

Circle delete_Circle(Circle c)
{
  delete_Point(c.p);
  c.radius = 0;
}