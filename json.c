#include "json.h"

int main()
{
  // Clearing the console
  clear();

  // Creating a new json
  json j_array[2];

  // Adding values to the json
  j_array[0] = create_json("name", "John");
  j_array[1] = create_json("age", "20");

  // Printing the json
  print_json_array(j_array, 2);

  return 0;
}