#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the parameter
 */

void puts_half(char *str)
{
int len = _strlen(str);
int i;
int n;

if ( len % 2 == 0)
{
n = len  / 2;
for (i = n ; i <= len - 1; ++i)
{
_putchar(str[i]);
}

}
else
{
n = (len - 1) / 2;
for (i = n + 1; i <= len - 1; ++i)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
/**
 * _strlen - return the lenght of an array
 * @s : the str
 * Return: the lenght
 */


int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
