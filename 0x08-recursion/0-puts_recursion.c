#include "main.h"

/**
 * _puts_recurion - prints a string
 * @s: the pointer to the string
 */

void _puts_recursion(char *s)
{
int i = 0;
if (*(s + i) != '\0')
{
return;

}
_putchar(*(s + i));
i++;
_putchar('\n');
}
