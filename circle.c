#include "circle.h"

int main()
{

  clear();

  // Creating a new circle
  Circle my_circle = create_Circle(50, 50, 5);
  printf("Circle created\n");

  // Printing the circle
  print_Circle(my_circle);

  // Deleting the circle
  delete_Circle(my_circle);
  printf("Circle deleted\n");

  return 0;
}