#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c;
for (c = '0'; c <= 9; ++c)
putchar(c);
putchar(',');
 putchar(' ');
putchar('\n');
return (0);
}
