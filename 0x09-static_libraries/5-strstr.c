#include "main.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: target substring to search
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, j, k;

if (needle[0] == '\0')
return (haystack);
while (haystack[i] != '\0')
{
if (haystack[k] == needle[0])
i++, j++;
break;
}
if (needle[i] == needle[j])
{
return (haystack + i);
}
return (NULL);
}
