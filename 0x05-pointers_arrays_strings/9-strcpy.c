#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * src to the buffer pointed to by dest
 * @dest: pointer of a char type
 * @src: pointer of a char type
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int len = _strlen(src);
int i;

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - Return the lengh of an array
 * @s: the pointer of the array
 * Return: the length
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
