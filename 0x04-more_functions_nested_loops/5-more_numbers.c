#include "main.h"

/**
 * more_numbers - return 10 x 0 to 14
 * Return: the result line by line
 */

void more_numbers(void)
{
int n = 0;
char c;
while (n <= 9)
{
for (c = 0 ; c <= 14 ; c++)
{
if (c > 9)
{
_putchar('1');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
