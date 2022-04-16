#include "main.h"

/**
 * print_times_table - Print n times a table
 * @n: the integer 
 */

void print_times_table(int n)
{
int multi, num, prod;

if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (multi = 1; multi <= n; multi++)
{
_putchar(',');
_putchar(' ');

prod = num * multi;

if (prod < 10 && multi != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((prod % 10) + '0');
}

else if (prod <= 99 && prod >= 10)
{
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
