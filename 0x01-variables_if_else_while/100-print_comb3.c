#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 56; n++)
{
for (j = 49; j <= 57; m++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}