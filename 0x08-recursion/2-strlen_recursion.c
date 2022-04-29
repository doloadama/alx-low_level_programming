#include "main.h"

/**
 * _strlen_recursion - return the lenght of a string
 *@s: the input string
 * Return: the lenght of s
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return;
}

return (_strlen_recursion(s + 1) + 1);
}
