#include "main.h"

/**
 * *_strcat - write a function that concatenates two strings
 * @dest: destination of the strings
 * @src: the source of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i])
i++;
for (j = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
