#include "main.h"

/**
 * _strcat(char *dest, char *src)
 * @dest:pointer destination
 * @src: pointer source
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
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
