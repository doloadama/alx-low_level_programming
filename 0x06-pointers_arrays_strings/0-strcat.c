#include "main.h"

/**
 * _strcat - write a function that concatenates two strings
 * @dest: destination of the strings
 * @src: the source of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
