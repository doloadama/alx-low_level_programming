#include "main.h"



/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
int i;

if (n >> 1)
{
print_binary(n >> 1);
}
i = n & 1;
_putchar(i + '0');
}


