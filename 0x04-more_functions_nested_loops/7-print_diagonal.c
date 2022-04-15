#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: the number of line
 */

void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= n; j++)
{
if (i == j)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n'),
}
}
