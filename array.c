#include <stdio.h>
#include "array.h"

int main(int argc, char *argv[])
{

  clear();

  // Creating a new array
  array array = *array_new(10);

  // Setting array values
  array_set(&array, 0, 1);
  array_set(&array, 1, 1);
  // Skiped 2
  array_set(&array, 3, 1);

  // Printing the specific array element
  printf("\narray[0] = %d\n", array_get(&array, 0));

  // Printing the array
  printf("\nArray Elements: ");
  array_print(&array);
  printf("\n\n");

  // Freeing the array
  array_free(&array);

  return 0;
}