#include "main.h"
#include <stdio.h>
/**
 * *_strcat - write a function that concatenates two strings
 * @dest: destination of the strings
 * @src: the source of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
if (dest[i] == '\0')
{
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[i];
}
}
}
dest[i] = '\0';
return (dest);
}
