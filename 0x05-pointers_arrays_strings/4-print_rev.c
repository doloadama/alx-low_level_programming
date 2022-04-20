#include "main.h"

/**
 * print_rev - Print a string in reverse
 *@s: the parameter
 */

void print_rev(char *s)
{
int i = 0;
while(s[i] != '\0')
    {
      i++;
    }
while (s[i] != '\0')
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
