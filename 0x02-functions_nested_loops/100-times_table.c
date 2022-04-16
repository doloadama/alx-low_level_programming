#include "main.h"

/**
 * print_times_table - Print n times a table
 * @n: the integer
 */
void print_times_table(int n)
{
int multi, num, prod;
if (!(n > 15 || n < 0))
{
for (num = 0; num <= n; num++)
{
for (multi = 0; multi <= n; multi++)
{
prod = (multi * num);
if (multi != 0)
{
_putchar(',');
_putchar(' ');
}
if (prod < 10 && multi != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((prod % 10) + '0');
}
else if (prod < 100 && prod >= 10)
{
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod >= 100 && multi != 0)
{
_putchar((prod / 100) + '0');
_putchar((prod / 10) % 10 + '0');
_putchar((prod % 10) + '0');
}
else
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
