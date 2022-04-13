#include "main.h"

/**
 * print_times_table - Print n times a table
 * @n: the integer 
 */

void times_table(int n)
{
if (n > 15 || n < 0)
{
int num, multi, prod;
for (num = 0; num <= n; num++)
{
_putchar('0');
for (multi = 1; multi <= n; multi++)
{
_putchar(',');
_putchar(' ');
_putchar(' ');

prod = num * multi;

if (prod <= n)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
