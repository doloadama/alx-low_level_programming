#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c;
for (c = 26; c >= 0; ++c)
putchar('z' + c);
putchar('\n');
return (0);
}
