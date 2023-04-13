#include "circle.h"

int main()
{

  Circle my_circle = create_Circle(50, 50, 5);
  printf("Circle created\n");

  print_Circle(my_circle);

  delete_Circle(my_circle);
  printf("Circle deleted\n");

  return 0;
}