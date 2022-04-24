#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: the destination array
 * @src: the source array
 * @n: the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
