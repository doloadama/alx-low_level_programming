#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: varaiable that contain the character to locate
 * Return: s
 */

char *_strcher(char *s, char c)
{
int i = 0;
while ( s[i] != '\0' && s[i] != c)
{
i++;
if (s[i] == c)
return(&s[i]);
else
return (NULL);
}
}
