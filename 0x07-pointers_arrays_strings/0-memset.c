#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: size of the array
 * @s: the pointer
 * @b: the constant
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
int size = n;
if (size > 0)
{
for (i = 0; i < size; i++)
s[i] = b;
}
return (s);
}
