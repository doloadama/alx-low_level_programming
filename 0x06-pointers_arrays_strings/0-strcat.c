#include "main.h"

/**
 * _strcat - write a function that concatenates two strings
 * @dest: destination of the strings
 * @src: the source of the string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

while(dest[i++] != '\0')
{
while(src[j++] != '\0')
{
dest[i] = src [j];
}
return (dest);
}
