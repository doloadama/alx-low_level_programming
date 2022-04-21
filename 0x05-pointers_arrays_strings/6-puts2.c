#include "main.h"

/**
 * puts2 - prints evry other character of a string
 * @str: the parameter
 */

void puts2(char *str)
{
int i = 0;

if (str[0] != '\0')
{
do {
_putchar(str[i]);
i += 2;
} while ((str[i - 1] != '\0') && (str[i] != '\0'));
}
_putchar('\n');
}
