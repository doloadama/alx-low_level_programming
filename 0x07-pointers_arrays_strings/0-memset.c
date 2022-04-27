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
if (n > 0)
{
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
}
