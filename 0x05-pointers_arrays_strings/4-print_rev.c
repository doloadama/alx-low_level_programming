#include "main.h"

/**
 * print_rev - Print a string in reverse
 *@s: the parameter
 */

void print_rev(char *s)
{
int n = _strlen(s);
int i = n;
while (s[i] != '\0')
{
_putchar(s[i]);
_putchar('\n');
i--;
}
}
