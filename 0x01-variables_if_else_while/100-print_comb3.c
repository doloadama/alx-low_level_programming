#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
for (c = 0; c <= 89; c++)
{
if (c <= 9)
{
putchar('0' + c);
}
if (c != '89')
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
