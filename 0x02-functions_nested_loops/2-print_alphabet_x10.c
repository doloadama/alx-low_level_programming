#include "main.h"

/**
 * print_alphabet_x10 - return the alphabet 10 times
 */


void print_alphabet_x10(void)
{
int n = 0;
char c;
while (n++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');

}
}
