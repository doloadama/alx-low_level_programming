#include "main.h"

/**
 * print_sign - Check the sign
 * @n: the number to be checked
 * Return: 1 if n is greater
 * 0 if n is 0
 * -1 if n is less than 0
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('\n');
return (0);
}
