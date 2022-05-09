#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *newd;

newd = malloc(sizeof(struct dog));
if (newd == NULL)
return (NULL);

if (name == NULL)
{
free(newd);
return (NULL);
}
newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (newd->name == NULL)
return (NULL);
_strcpy(newd->name, name);

newd->age = age;

if (owner == NULL)
{
free(newd->owner);
free(newd);
return (NULL);
}
newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (newd->owner == NULL)
return (NULL);
_strcpy(newd->owner, owner);

return (newd);
}
