#include "main.h"

/**
 * print_triangle - print a triangle with #
 *
 * @size: is the size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
int row;
int column;
for (row = 0; row < size; row++)
{
for (column = 0; column > size - row; column++)
{
_putchar(' ');
for (column = size - row - 1; column <= size; column++)
{
_putchar('#');
if ((column == (size - 1)) && row != (size - 1)))
_putchar('\n');
}
}
_putchar('\n');
}
}
