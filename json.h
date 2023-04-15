#include "utils.h"

#define LIMIT 100

typedef struct
{
  char key[LIMIT];
  char value[LIMIT];
} json;

json create_json(char *key, char *value);
void print_json(json j);
void print_json_array(json *j, int size);

json create_json(char *key, char *value)
{
  json j;
  strcpy(j.key, key);
  strcpy(j.value, value);
  return j;
}

void print_json(json j)
{
  printf("Key: %s, Value: %s", j.key, j.value);
}

void print_json_array(json *j, int size)
{
  for (int i = 0; i < size; i++)
  {
    print_json(j[i]);
    printf("\n");
  }
}
