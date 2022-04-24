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
int i = 0;
int j;

while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
