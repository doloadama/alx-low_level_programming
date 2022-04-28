#include "main.h"

/**
 * _puts_recurion - prints a string
 * @s: the pointer to the string
 */

void _puts_recursion(char *s)
{
int i = 0;
char c;
if (*(s + i) != '\0')
{
return;

}
c = s[i];
return (c);
i++;
_putchar ('\n');
}
