#include "main.h"

/**
 * _puts_recurion - prints a string
 * @s: the pointer to the string
 */

void _puts_recursion(char *s)
{
int i = 0, j;
char c;
while (s[i] != '\0')
{
_putchar(s);
i++;
}
_putchar('\n');
}
