#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c; 
for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);
putchar('\n');
return (0);
}
