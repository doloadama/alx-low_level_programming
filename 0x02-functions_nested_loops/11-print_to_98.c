#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * @n: the parameter 
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n++ < 98)
{
_putchar(n);
_putchar(' ');
}
}
if (n > 98)
{
while (n-- >98)
{
_putchar(n);
_putchar(" ");
}
}
_putchar(',');
}
