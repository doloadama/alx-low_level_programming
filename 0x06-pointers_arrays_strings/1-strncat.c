#include "main.h"

/**
 * _strncat - write a function that concatenates two strings
 * @dest:pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index;
int count;

for (index = 0; dest[index] != '\0'; index++)
for (count = 0; count < n && src[count] != '\0'; count++)
{
dest[index] = src[count];
index++;
}
if (count < n)
{
dest[index] = '\0';
}
return (dest);
}