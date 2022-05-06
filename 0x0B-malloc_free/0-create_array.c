#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - funtion that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the initial char
 * Return: Null if size is 0 or a pointer if the size > 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = (char *) malloc(size * sizeof(char));
if (size == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}

