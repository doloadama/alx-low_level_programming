#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
for (c = '00'; c <= '89'; c++)
{
putchar(c);
if (c != '89')
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
