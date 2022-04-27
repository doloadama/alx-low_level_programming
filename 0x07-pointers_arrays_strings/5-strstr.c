#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: target substring to search
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
nt i = 0, j, k;

if (needle[0] == '\0')
return (haystack);
while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
i ++, j++;
break;
}
if (needle[i] == needle[j]
{
return (haystack + i);
}
}
i ++;
}
return(NULL)
}
