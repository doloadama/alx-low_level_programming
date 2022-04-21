#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 *@s: the parameter
 */

/**
 * _strlen - Return thelength
 * @s: the pointer
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
void print_rev(char *s)
{
int  leng;
int i;


leng = _strlen(s);
for (i = leng - 1; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
