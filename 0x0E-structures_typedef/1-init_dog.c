#include <stdio.h>
#include "main.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
