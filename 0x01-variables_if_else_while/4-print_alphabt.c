0;10;1c#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c;
for (c = 'a'; c < 'z'; c++)
if (c == 'e' && c == 'q')
putchar(c - 'e', c - 'q');
putchar('\n');
return (0);
} 
