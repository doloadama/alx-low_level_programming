#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the pointer to the string
 * @accept: the prefix
 * Return: the lenght
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j;
int count = 0;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
return (matches);
}
i++;
}
return (matches);
}
