#include "main.h"

/**
 * more_numbers - return 10 x 0 to 14
 * Return: the result line by line
 */

void more_numbers(void)
{
int n;
char c;
while (++n <= 10)
{
for (c = 0 ; c <= 14 ; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}
_putchar('\n');
}
