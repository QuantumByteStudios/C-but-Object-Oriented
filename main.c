#include "utils.h"

typedef struct
{
    // data members
    char name[50];
    int age;
    // fuctions
    void (*get)(struct Person *person);
    void (*set)(struct Person *person, char *name, int age);
} Person;

// function definitions
void get(Person *p)
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
}

void set(Person *p, char *name, int age)
{
    strcpy(p->name, name);
    p->age = age;
}

int main()
{
    clear();

    Person harshit, m;
    harshit.get = get;
    harshit.set = set;

    harshit.set(&harshit, "Harshit", 20);
    harshit.get(&harshit);

    return 0;
}