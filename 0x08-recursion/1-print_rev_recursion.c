#include "main.h"

/**
 * _print_rev_recursion(char *s)
 * @s: the string
 */

void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}
char tmp;
char *rev = s;
tmp = *s;
*s = rev[0];
rev[0] = tmp;
rev--;
s++;
_print_rev_recursion(rev);
_putchar(*rev);
}
