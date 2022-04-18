#include "main.h"

/**
 * print_triangle - print a triangle with #
 *
 * @size is the size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
int row;
int column;
int k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (column = 0; column > size - row; column++)
_putchar(' ');
for (column = size - row - 1; column <= size; column++)
_putchar('#');
_putchar('\n');
}
}
}
