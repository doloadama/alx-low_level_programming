#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: the size of the array
 * @dest: the destinatination of the memory area
 * @src: the source of the memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int size = n;
if (size > 0)
{
for (i = 0; i < size; i++)
dest[i] = src[i];
}
return (dest);
}
