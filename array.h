#include "utils.h"

typedef struct
{
  int *array;
  int size;
} array;

array *array_new(int size);
void array_free(array *a);
void array_set(array *a, int index, int value);
int array_get(array *a, int index);
void array_print(array *a);

array *array_new(int size)
{
  array *a = malloc(sizeof(array));
  a->array = malloc(sizeof(int) * size);
  a->size = size;
  return a;
}

void array_free(array *a)
{
  free(a->array);
  free(a);
}

void array_set(array *a, int index, int value)
{
  a->array[index] = value;
}

int array_get(array *a, int index)
{
  return a->array[index];
}

void array_print(array *a)
{
  int i;
  for (i = 0; i < a->size; i++)
  {
    if (i == a->size - 1)
      printf("%d ", a->array[i]);
    else
      printf("%d, ", a->array[i]);
  }
  printf("");
}